// Print n natural number using function//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printn(x);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-1);
        printf("%d ",n);
    }
}
