#include<stdio.h>
int main()
{
    int m;0<m;
    int n;n>1000;
    int a,i,temp;
    scanf("%d %d",&m,&n);
    if(n>m){
        temp=n;
        n=m;
        m=temp;
    }
    for(i=m;;i++)
    {
        if(i%n==0&&i%m==0)
        {
            break;
        }
    }
    while(n!=0)
    {
        a=m%n;m=n;n=a;
    }
    printf("%d %d",m,i);
    return 0;
}
