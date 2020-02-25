#include <stdio.h>


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

void matrixsum(int addd[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",addd[i][j]);
        }
        printf("\n");
    }
}

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
    printf("\n");

    int c[2][3], d[2][3], addd[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            addd[i][j] = c[i][j] + d[i][j];
        }
    }
    
    matrixsum(addd);

    int i=20;
    printf("%p", &i);
    
    return 0;
}
