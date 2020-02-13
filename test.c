#include <stdio.h>
int main()
{
    int flag;
    int a1 = 1, a2 = 40;

    for (int i = a1 + 1; i < a2; i++)
    {
        flag = primenums(i);

        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

int primenums(int a)
{
    int flag = 1;
    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}