#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int value , index;
    scanf("%d %d",&value,&index);
    for (int i =n; i>index ;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[index]=value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}