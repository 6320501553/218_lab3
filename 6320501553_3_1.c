#include<stdio.h>
int main()
{
    int a[5][4],i,j,s[5]= {0},max;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
            s[i]+=a[i][j];
        }
    }
    max=s[0];
    for(i=1; i<5; i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    for(i=1; i<5; i++)
    {
        if(s[i]==max)
        {
            printf("%d %d",i+1,max);
            break;
        }
    }
    return 0;
}
