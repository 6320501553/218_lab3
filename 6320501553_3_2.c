#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    scanf("%d",&n);
    int time[48]={0},max=0,check=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        time[j-1]=time[j-1]+k;
        if(max<time[j-1])
        {
            max=time[j-1];
            check=j;
        }
    }
    printf("%d %d",check,max);
    return 0;
}
