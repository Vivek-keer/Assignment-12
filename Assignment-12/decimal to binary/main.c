#include <stdio.h>
#include <stdlib.h>
void bin(int);
int main()
{
    int dec;
    printf("Enter the number: ");
    scanf("%d",&dec);
    printf("Binary number is: ");
    bin(dec);
    return 0;
}
bin(int b)
{
    if(b>0)
    {
    int x;
    x=b&1;
    bin(b>>1);
    printf("%d",x);
    }
}
