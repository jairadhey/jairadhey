#include<stdio.h>
int find(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    ans*=i;
    return ans;
}
int main()
{
    int n=5;
    printf("%d",find(n));
    return 0;
}