#include <stdio.h>
int main()
{
    int i,j,n=5;
    int a=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                a=a+1;
                printf("%d",a);
                if(j!=i)
                    printf("*");
            }
            printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        a=a-i;
        for(j=1;j<=i;j++)
            {
                printf("%d",a+j);
                if(j!=i)
                    printf("*");
            }
            printf("\n");
    }
return 0;
}
