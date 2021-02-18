#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m[n],k=n;
    for(i=0; i<n+1; i++)
    {
        for(j=2; j<n+1; j++)
        {
            if(n%j==0)
            {
                m[i]=j;
                break;
            }
        }
        n=n/j;
    }
    for(i=0; i<3; i++)
    {
        if(m[i]==m[i+1])
        {
            printf("%d Not is not a Lucky Number\n",k);
            break;
        }
        if(m[i]!=m[i+1])
        {
            printf("%d is a Lucky Number\n",k);
            break;
        }
    }
    return 0;
}
