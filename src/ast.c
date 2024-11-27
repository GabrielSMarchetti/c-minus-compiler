#include "globals.h"
#include "lexer.h"

static int indentno = 0;
#define INDENT indentno+=2
#define UNINDENT indentno-=2

TreeNode * newStmtNode(StmtKind kind) { 
  TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
  int i;
  if (t==NULL){
    printf("Sem memória disponível");
    exit(1);
  }
  else {
    for (i=0;i<MAXCHILDREN;i++) t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = StmtK;
    t->kind.stmt = kind;
    t->line_number = cur_line_number;
    t->attr.scope = "global";
    t->attr.vetor = 0;
  }
  return t;
}

TreeNode * newExpNode(ExpKind kind) { 
  TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
  int i;
  if (t==NULL){
    printf("Sem memória disponível");
    exit(1);
  }
  else {
    for (i=0;i<MAXCHILDREN;i++) t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = ExpK;
    t->kind.exp = kind;
    t->line_number = cur_line_number;
    t->type = VoidK;
    t->attr.scope = "global";
    t->attr.vetor = 0;
  }
}

static void printSpaces(){ 
  int i;
  for (i=0;i<indentno;i++)
    printf(" ");
}

char* copyString(const char *string){
  char *str = malloc(sizeof(char)*(strlen(string)+1));
  strcpy(str, string);
  return str;
}

void printOp(int token){
   switch (token){
      case PLUS: 
        printf(" PLUS  \n"); 
         break;
      case MINUS: 
        printf(" MINUS  \n"); 
         break;
      case MULT: 
        printf(" MULT  \n"); 
         break;
      case NEQ: 
        printf(" NEQ  \n");  
         break;
      case GT: 
        printf(" GT  \n");  
         break;
      case LT: 
        printf(" LT  \n");  
         break;
      case GE: 
        printf(" GE  \n");  
         break;
      case LE: 
        printf(" LE  \n");  
         break;
      default:
        printf(" unknown  \n");  
   }
}

void addScopes(TreeNode *root, char *scope){
    int i;
    while(root != NULL){
        root->attr.scope = scope;    
        for (i=0;i<MAXCHILDREN;i++)
            addScopes(root->child[i], scope);
        root = root->sibling;
    }
}

void printTree(TreeNode *tree) {
    int i;
    INDENT;
    while (tree != NULL) {
        printSpaces();
        if (tree->nodekind == StmtK) {
            switch (tree->kind.stmt) {
                case IfK:
                    printf("If\n");
                    break;
                case AssignK:
                    printf("Atribuicao\n");
                    break;
                case WhileK:
                    printf("While\n");
                    break;
                case ReturnK:
                    printf("Return\n");
                    break;
                case VarK:
                    printf("Variavel: %s\n", tree->attr.name);
                    break;
                case FunK:
                    printf("Funcao: %s\n", tree->attr.name);
                    break;
                case CallK:
                    printf("Chamada de funcao: %s\n", tree->attr.name);
                    break;
                case ParamK:
                    printf("Parametro: %s\n", tree->attr.name);
                    break;
                default:
                    printf("Unknown StmtNode kind\n");
                    break;
            }
        } else if (tree->nodekind == ExpK) {
            switch (tree->kind.exp) {
                case OpK:
                    printf("Operacao: ");
                    printOp(tree->attr.op);
                    break;
                case ConstK:
                    printf("Constante: %d\n", tree->attr.val);
                    break;
                case IdK:
                    printf("Id: %s\n", tree->attr.name);
                    break;
                case VetK:
                    printf("Vetor: %s\n", tree->attr.name);
                    break;
                case TypeK:
                    printf("Tipo: %s\n", tree->attr.name);
                    break;
                default:
                    printf("Unknown ExpNode kind\n");
                    break;
            }
        } else {
            printf("Unknown node kind\n");
        }
        for (i = 0; i < MAXCHILDREN; i++) {
            printTree(tree->child[i]);
        }
        tree = tree->sibling;
    }
}

void printTreeFile(TreeNode * tree){
  FILE *output = fopen("analises/sintatico.txt", "w");
  printTree( tree);
  fclose(output);
}