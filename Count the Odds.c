#include<stdio.h>
int main()
{
    long long int a,b,t=0;
    scanf("%lld %lld",&a,&b);
    t=((b-a)/2)+1;
    if(a%2==0&&b%2==0)
        t--;
    printf("%lld\n",t);
    return 0;
}
