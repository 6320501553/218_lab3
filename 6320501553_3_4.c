#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=2; j<=n; j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            if(i>k)
                k=i;
        }
    }
    printf("%d",k);
    return 0;
}

