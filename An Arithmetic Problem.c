#include<stdio.h>

int main()
{
    int t,i,a1,a2,a3,n,d1,d2;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d %d",&a1,&a2,&a3,&n);
        d1=a2-a1;
        d2=a3-a2;
        if(d1==d2)
        {
            printf("Case %d: %d\n",i+1,a1+(n-1)*d1);
        }
        else
        {
            printf("Case %d: Error\n",i+1);
        }

    }
}
