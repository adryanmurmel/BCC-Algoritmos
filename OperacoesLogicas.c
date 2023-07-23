#include <stdio.h>

int Not(int);
int AandB(int, int);
int AorB(int, int); 
int IfAThenB(int, int); 
int AEqualToB(int, int); 
 
int main() 
{
  /*Not A/Not B*/
  printf("\n\n|A|B|!A|!B|\n");
  printf("|0|0| %d| %d|\n", Not(0), Not(0)); 
  printf("|0|1| %d| %d|\n", Not(0), Not(1));
  printf("|1|0| %d| %d|\n", Not(1), Not(0));
  printf("|1|1| %d| %d|\n\n", Not(1), Not(1));

  /*A and B/A or B*/
  printf("|A|B|A and B|A or B|\n");
  printf("|0|0| %d | %d |\n", AandB(0, 0), AorB(0, 0));
  printf("|0|1| %d | %d |\n", AandB(0, 1), AorB(0, 1));
  printf("|1|0| %d | %d |\n", AandB(1, 0), AorB(1, 0));
  printf("|1|1| %d | %d |\n\n", AandB(1, 1), AorB(1, 1));

  /*A -> B == (!A or B*/
  printf("|A|B|A -> B|\n");
  printf("|0|0|  %d  |\n", IfAThenB(0, 0));
  printf("|0|1|  %d  |\n", IfAThenB(0, 1));
  printf("|1|0|  %d  |\n", IfAThenB(1, 0));
  printf("|1|1|  %d  |\n\n", IfAThenB(1, 1));

  /*A == B*/
  printf("|A|B|A <-> B|\n");
  printf("|0|0|  %d  |\n", AEqualToB(0, 0));
  printf("|0|1|  %d  |\n", AEqualToB(0, 1));
  printf("|1|0|  %d  |\n", AEqualToB(1, 0));
  printf("|1|1|  %d  |\n\n", AEqualToB(1, 1));
}

int Not(int x)
{
  return !x;
}

int AandB(int a, int b)
{
  if (a && b)
    return 1;
  else
    return 0;
}

int AorB(int a, int b)
{
  if (a || b)
    return 1;
  return 0;
}

int IfAThenB(int a, int b)
{
  return ((!a) || b) ? 1 : 0;
}

int AEqualToB(int a, int b)
{
  return a == b;
}
