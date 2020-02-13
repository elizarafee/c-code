#include<stdio.h>
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
   
   
   
    return 0;
}
