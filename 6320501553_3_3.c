#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n+1; i++)
    {
        for(j=2; j<n+1; j++)
        {
            if(n%j==0)
            {
                printf("%d\n",j);
                break;
            }
        }
        n=n/j;
        if(n==1)
            printf("0\n");
    }
    return 0;
}
