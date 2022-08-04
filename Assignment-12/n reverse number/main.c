// Print n natural number in reverse using function//
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
        printf("%d ",2*n-1);
        printn(n-1);
    }
}
