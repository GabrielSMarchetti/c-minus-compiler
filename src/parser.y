%{

#define YYSTYPE TreeNode*
#include "globals.h"
#include "lexer.h"
#include "ast.h"

int yyerror(char *s);
static TreeNode *root;
static int saved_cur_line_number;

%}

%token ASSIGN ELSE IF INT RETURN VOID WHILE

%token PLUS MINUS MULT DIV LT LE GT GE EQ NEQ SEMI VIR LPAREN RPAREN LSBRACK RSBRACK LBRACE RBRACE COMMA

%token ID NUMBER

%token ERROR

%%

programa : declaracao_lista   {root = $1;} ;
declaracao_lista : declaracao_lista declaracao
                  {
                    TreeNode* t = $1;
                    if(t != NULL){
                      while(t->sibling != NULL) t = t->sibling;
                      t->sibling = $2;
                      $$ = $1;
                    }
                    else $$ = $2;
                  }
                 | declaracao {$$ = $1;} ;

declaracao : var_declaracao {$$ = $1;} | fun_declaracao {$$ = $1;} ;

var_declaracao : tipo_especificador ident SEMI 
              {
                $$ = newExpNode(TypeK);
                $$->type = $1->type;
                $$->attr.name = $1->attr.name;
                $$->child[0] = $2;
                $2->nodekind = StmtK;
                $2->kind.stmt = VarK;
                $2->type = $1->type;
						  }
               | tipo_especificador ident LSBRACK num RSBRACK SEMI
                {
                  $$ = newExpNode(TypeK);
                  $$->type = $1->type;
                  $$->attr.name = $1->attr.name;
                  $$->child[0] = $2;
                  $2->nodekind = StmtK;
                  $2->kind.stmt = VarK;
                  $2->type = $1->type;
                  $2->attr.len = $4->attr.val;
                  $2->attr.vetor = 1;
                };

fun_declaracao : tipo_especificador ident LPAREN params RPAREN EQosto_decl
                {
                  $$ = newExpNode(TypeK);
                  $$->type = $1->type;
                  $$->attr.name = $1->attr.name;
                  $$->child[0] = $2;
                  $2->child[0] = $4;
                  $2->child[1] = $6;
                  $2->nodekind = StmtK;
                  $2->kind.stmt = FunK;
                  $2->type = $1->type;
                  addScopes($$, $2->attr.name);
                }

params : param_lista { $$ = $1; } | VOID
        {
				  $$ = newExpNode(TypeK);
          $$->attr.name = "void";
          $$->child[0] = NULL;
				}
       ;
param_lista : param_lista VIR param 
            {
              TreeNode* t = $1;
              if(t != NULL){
                while(t->sibling != NULL)
                  t = t->sibling;
                t->sibling = $3;
                $$ = $1;
              }
              else 
                $$ = $3;
            }
            | param 
            {
              $$ = $1;
            };

tipo_especificador : INT
                  {
                    $$ = newExpNode(TypeK);
                    $$->attr.name = "inteiro";
                    $$->type = IntegerK;
                  }
                  | VOID
                  {
                    $$ = newExpNode(TypeK);
                    $$->attr.name = "void";
                    $$->type = VoidK;
                  }
                  ;
param : tipo_especificador ident
      {
        $$ = newExpNode(TypeK);
        $$->child[0]= $2;
        $$->type = $1->type;
        $$->attr.name = $1->attr.name;
        $2->nodekind = StmtK;
        $2->kind.stmt = VarK;
        $2->type = $1->type;

      }
      | tipo_especificador ident LSBRACK RSBRACK
      {
        $$ = newExpNode(TypeK);
        $$->child[0] = $2;
        $$->type = $1->type;
        $$->attr.name = "inteiro_parametro_vetor";
        $2->nodekind = StmtK;
        $2->type = IntegerVetorK;
        $2->kind.exp = VetK;
      }
      ;
EQosto_decl : LBRACE local_declaracoes statement_lista RBRACE
              {
                TreeNode* t = $2;
                if(t != NULL){
                  while(t->sibling != NULL)
                  t = t->sibling;
                  t->sibling = $3;
                  $$ = $2;
                } 
                else $$ = $3;
              }
              | LBRACE local_declaracoes RBRACE //pois podem ser vazio
              {
                $$ = $2;
              }
              | LBRACE statement_lista RBRACE //pois podem ser vazio
              {
                $$ = $2;
              }
              | LBRACE RBRACE {}            //pois podem ser vazio
              ;
local_declaracoes : local_declaracoes var_declaracao 
                  {
                    TreeNode* t = $1;
                    if(t != NULL){
                      while(t->sibling != NULL) t = t->sibling;
                      t->sibling = $2;
                      $$ = $1;
                    }else $$ = $2;
                  }
                  | var_declaracao
                  {
                    $$ = $1;
                  }
                   /* vazio, apaguei pois estava dando erro :/ */
                  ;
statement_lista : statement_lista statement 
                {
                    TreeNode* t = $1;
                    if(t != NULL){
                      while(t->sibling != NULL)
                      t = t->sibling;
                      t->sibling = $2;
                      $$ = $1;
                    }else $$ = $2;
                  }
                  | statement
                  {
                    $$ = $1;
                  }
                /* vazio, apaguei pois estava dando erro :/ */
                ;
statement : expressao_decl
          {
            $$ = $1;
          }
          | EQosto_decl 
          {
            $$ = $1;
          }
          | selecao_decl 
          {
            $$ = $1;
          }
          | iteracao_decl 
          {
            $$ = $1;
          }
          | retorno_decl
          {
            $$ = $1;
          }
          ;
expressao_decl : expressao SEMI 
                {
                  $$ = $1;
                }
               | SEMI
               ;
selecao_decl : IF LPAREN expressao RPAREN statement 
              {
                $$ = newStmtNode(IfK);
                $$->child[0] = $3;
                $$->child[1] = $5;
              }
             | IF LPAREN expressao RPAREN statement ELSE statement
             {
                $$ = newStmtNode(IfK);
                $$->child[0] = $3;
                $$->child[1] = $5;
                $$->child[2] = $7;
             }
             ;
iteracao_decl : WHILE LPAREN expressao RPAREN statement
              {
                $$ = newStmtNode(WhileK);
                $$->child[0] = $3;
                $$->child[1] = $5;
              }
              ;
retorno_decl : RETURN SEMI 
              {
                $$ = newStmtNode(ReturnK);
              }
             | RETURN expressao SEMI
              {
                $$ = newStmtNode(ReturnK);
                $$->child[0] = $2;
              }
             ;
expressao : var ASSIGN expressao 
          {
            $$ = newStmtNode(AssignK);
            $$->attr.name = $1->attr.name;
            $$->child[0] = $1;
            $$->child[1] = $3;
          }
          |
          var ASSIGN ativacao 
          {
            $$ = newStmtNode(AssignK);
            $$->attr.name = $1->attr.name;
            $$->child[0] = $1;
            $$->child[1] = $3;
          }
          | simples_expressao
          {
            $$ = $1;
          }
          ;
var : ident 
    {
      $$ = $1;
    }
    | ident LSBRACK expressao RSBRACK
    {
      $$ = $1;
      $$->child[0] = $3;
      $$->kind.exp = VetK;
      $$->type = IntegerK;
    }
    ;
simples_expressao : soma_expressao relacional soma_expressao 
                  {
                      $$ = $2;
                      $$->child[0] = $1;
                      $$->child[1] = $3;
                  }
                  | soma_expressao
                  {
                    $$ = $1;
                  }
                  ;
relacional : LT 
            {
              $$ = newExpNode(OpK);
              $$->attr.op = LT;                            
              $$->type = BooleanK;
            }
           | LE 
           {
            $$ = newExpNode(OpK);
            $$->attr.op = LE;                            
						$$->type = BooleanK;
           }
           | GT 
           {
            $$ = newExpNode(OpK);
            $$->attr.op = GT;                            
						$$->type = BooleanK;
           }
           | GE 
           {
            $$ = newExpNode(OpK);
            $$->attr.op = GE;                            
						$$->type = BooleanK;
           }
           | EQ 
           {
            $$ = newExpNode(OpK);
            $$->attr.op = EQ;                            
						$$->type = BooleanK;
           }
           | NEQ
           {
            $$ = newExpNode(OpK);
            $$->attr.op = NEQ;                            
						$$->type = BooleanK;
           }
           ;
soma_expressao : soma_expressao soma termo 
              {
                $$ = $2;
                $$->child[0] = $1;
                $$->child[1] = $3;
              }
               | termo
               {
                $$ = $1;
               }
               ;
soma : PLUS 
      {
        $$ = newExpNode(OpK);
        $$->attr.op = PLUS;  
      }
     | MINUS
     {
      $$ = newExpNode(OpK);
      $$->attr.op = MINUS;  
     }
     ;
termo : termo mult fator
      {
        $$ = $2;
        $$->child[0] = $1;
        $$->child[1] = $3;
      }
      | fator
      {
        $$ = $1;
      }
      ;
mult : MULT 
      {
        $$ = newExpNode(OpK);
        $$->attr.op = MULT; 
      }
      | DIV
      {
        $$ = newExpNode(OpK);
        $$->attr.op = DIV; 
      } 
     ;
fator : LPAREN expressao RPAREN 
      {
        $$ = $2;
      }
      | var 
      {
        $$ = $1;
      }
      | ativacao 
      {
        $$ = $1;
      }
      | num
      {
        $$ = $1;
      }
      ;
ativacao : ident LPAREN arg_lista RPAREN
          {
            $$ = $1;
            $$->child[0] = $3;
            $$->nodekind = StmtK;
            $$->kind.stmt = CallK;
          }
          | ident LPAREN RPAREN
          {
            $$ = $1;
            $$->nodekind = StmtK;
            $$->kind.stmt = CallK;
          }
          ;
arg_lista : arg_lista VIR expressao 
          {
            TreeNode* t = $1;
            if(t != NULL){
              while(t->sibling != NULL)
              t = t->sibling;
              t->sibling = $3;
              $$ = $1;
            } else $$ = $3;
          }
          | expressao
          {
            $$ = $1;
          }
          ;
ident : ID
      {
      $$ = newExpNode(IdK);
      $$->attr.name = copyString(yytext);
      }
;
num : NUMBER
      {
        $$ = newExpNode(ConstK);
        $$->attr.val = atoi(yytext);
        $$->type = IntegerK;
      }
;

%%


int yyerror(char *msg){
    printf("ERRO SINTÁTICO: %s LINHA: %d\n", yytext, cur_line_number);
    exit(-1);
}

TreeNode* parse(){
    yyparse();
    return root;
}

TreeNode* main(){
    while (yyparse());
    printTree(root);
    return root;
}