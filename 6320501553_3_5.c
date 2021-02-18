#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m[n],k=n,sum;
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
    for(i=0; i<n; i++)
    {
        if(m[i]!=0)
        {
            sum++;
            if(sum>3)
            {
                printf("%d Not is not a Lucky Number\n",k);
                break;
            }
            else
            {
                if(m[1]==m[2]||m[2]==m[3]||m[1]==m[3])
                {
                    printf("%d Not is not a Lucky Number\n",k);
                    break;
                }
                if(m[1]!=m[2]&&m[2]!=m[3]&&m[1]!=m[3])
                {
                    printf("%d is a Lucky Number\n",k);
                    break;
                }
            }
        }
    }
    return 0;
}
