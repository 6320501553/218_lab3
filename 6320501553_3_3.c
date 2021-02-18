#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                printf("%d\n",j);
                break;
            }
        }
        n=n/j;
    }
    return 0;
}
