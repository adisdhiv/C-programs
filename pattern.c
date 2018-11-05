# To print pattern
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
11*12*13*14*15
7*8*9*10
4*5*6
2*3
1


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
