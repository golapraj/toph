#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int a,b;
        char o;
        scanf("%d %c %d",&a,&o,&b);

        if(o=='+')
        {
            printf("Case %d: %d\n",i+1,a+b);
        }
        if(o=='-')
        {

            printf("Case %d: %d\n",i+1,a-b);
        }
        if(o=='*')
        {

            printf("Case %d: %d\n",i+1,a*b);
        }

    }
    return 0;
}
