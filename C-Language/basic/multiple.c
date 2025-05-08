#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    if(x%3==0||x%5==0)
    {
        printf("it is divisible\n");
    }
        else
        {
            printf("its not divisible\n");
        }

}