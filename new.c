#include<stdio.h>

void summation(int a, int b)
{
  int c = a + b;
  printf("%d\n", c);
}

int substract(int a, int b)
{
  int c = a-b;
  return c;
}

int main()
{
  int a = 5;
   printf("Hello World!");
  //  scanf("%d", &a);

   if(a<5)
   {
     printf("less than 5");
   }
   else if(a>5)
   {
     printf("greater than 5\n");
   }
   else
   {
     printf("Is equal to 5");
   }
   
   
   for (int i = 0; i < 5; i++)
   {
     printf("for loop: %d\n", i);
   }

   int i = 0;
   while (i<3)
   {
     printf("While loop: %d\n", i);
     i++;
   }
   
   do
   {
     printf("Do-While loop - mendatory printing");
   } while (i>3);

   for (int i = 0; i < 10; i++)
   {
     if (i == 4)
     {
       continue;
     }
     if(i == 8)
     {
       break;
     }
    printf("Break/Continue no: %d\n", i);
   }
    
    char op;
    int k, l;
    printf("enter an operator from * / + / - : \n");
    scanf("%c", &op);
    printf("enter two digits: ");
    scanf("%d %d", &k, &l);
    
    switch (op)
    {
      case '*':
      printf("%d * %d = %d\n", k, l, k*l);
      break;

      case '-':
      printf("%d - %d = %d\n", k, l, k-l);
      break;

      case '+':
      printf("%d - %d = %d\n", k, l, k+l);
      break;

      default:
      printf("Error! operator is not correct");
      break;    
    }

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
      sum += i;
      if (i==3)
      {
        goto work;
      }
    }

    work:
    printf("Goto executed,,,sum: %d\n", i);
    
    summation(12, 18);
    printf("%d", substract(18, 12));

    return 0;
}