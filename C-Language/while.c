
    #include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number\n");
    scanf("%d",&n);

     while(n<=9)
     {
        sum=sum+n;
        n++;
     }
     printf("the sum of %d numbers:%d\n",n,sum);
    }
