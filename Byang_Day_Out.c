#include<stdio.h>

int main()
{
    long int t,i,x,y,z;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld %ld %ld",&x,&y,&z);
         if(x+y<z)
            {
                printf("No\n");
                continue;
            }
            else if(x+z<y)
            {
                printf("No\n");
                continue;

            }
            else if(y+z<x)
            {
                printf("No\n");
                continue;

            }
            else
                printf("Yes\n");
    }
}

