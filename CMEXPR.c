#include <stdio.h>

#define MAX_SIZE 512

struct Node_t
{
  char oper;
  struct Node_t * left;
  struct Node_t * right;
};

struct Node_t nodes[MAX_SIZE];

char last;

struct Node_t * free_node;

char GetNextChar(void)
{
  char ret;

  do
  {
    ret = getchar();
  } while ((ret == ' ') || (ret == '\t'));
  return ret;
}

struct Node_t * E(void);

struct Node_t * T(void)
{
  struct Node_t * ret_node;

  if (last == '(')
  {
    last = GetNextChar();
    ret_node = E();
    last = GetNextChar(); /* preskocit ')' */
    return ret_node;
  }
  free_node->oper = last;
  last = GetNextChar(); /* preskocit terminator */
  return free_node++;
}

/*struct Node_t * Ec(struct Node_t * left);*/

struct Node_t * Fc(struct Node_t * left)
{
  struct Node_t * node;

  if ((last == '*') || (last == '/'))
  {
    node = free_node++;
    node->oper = last;
    last = GetNextChar();
    node->left = left;
    node->right = T();
    return Fc(node);
  }
  return left;
}

struct Node_t * F(void)
{
  struct Node_t * left_node;

  left_node = T();
  return Fc(left_node);
}

struct Node_t * Ec(struct Node_t * left)
{
  struct Node_t * node;

  if ((last == '+') || (last == '-'))
  {
    node = free_node++;
    node->oper = last;
    last = GetNextChar();
    node->left = left;
    node->right = F();
    return Ec(node);
  }
  node = Fc(left);
  if ((last == '+') || (last == '-'))
    return Ec(node);
  return node;
}

struct Node_t * E(void)
{
  struct Node_t * left_node;

  left_node = T();
  return Ec(left_node);
}

void Print(struct Node_t * node, int prior)
{
  int lpri, rpri;

/*printf("[node: %p], prior: %d\n", node, prior);*/
/*printf("  {left: %p, oper: \'%c\', right: %p}\n", node->left, node->oper, node->right);*/
  switch(node->oper)
  {
  case '+':
    lpri = rpri = 2;
    break;
  case '-':
    lpri = 2;
    rpri = 1;
    break;
  case '*':
    lpri = rpri = 1;
    break;
  case '/':
    lpri = 1;
    rpri = 0;
    break;
  default:
    putchar(node->oper);
    return;
  }
  if (lpri > prior)
    putchar('(');
  Print(node->left, lpri);
  putchar(node->oper);
  Print(node->right, rpri);
  if (lpri > prior)
    putchar(')');
/*printf("\n");*/
}

int main(void)
{
  struct Node_t * node;
  int n;

  scanf("%d\n", &n);
  while (n--)
  {
    last = GetNextChar();
    free_node = nodes;
    node = E();
    Print(node, 4);
    printf("\n");
/*printf("###########done############(posledni znak \'%c\')\n", last);*/
  }
  return 0;
}
