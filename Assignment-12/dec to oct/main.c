#include <stdio.h>
#include <stdlib.h>
void oct(int);
int main()
{
    int dec;
    printf("Enter the number: ");
    scanf("%d",&dec);
    printf("octal number is: ");
    oct(dec);
    return 0;
}
oct(int o)
{
    if(o>0)
    {
    int x;
    x=o%8;
    oct(o/8);
    printf("%d",x);
    }
}
