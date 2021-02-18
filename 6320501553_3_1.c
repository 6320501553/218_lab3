#include<stdio.h>
int main()
{
    int a[5][4],i,j,s[5]= {0},max=0;
    for(i=0; i<5; i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            s[i]+=a[i][j];
        }
        if(max<s[i])
        {
            max=s[i];
        }
    }
    for(i=0; i<5; i++)
    {
        if(max == s[i])
        {
            break;
        }
    }
     printf("%d %d",i+1,max);
    return 0;
}
