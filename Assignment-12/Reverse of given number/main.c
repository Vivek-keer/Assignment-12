#include <stdio.h>
#include <stdlib.h>
int Rev(int);
int count(int);
int main()
{
    int dec;
    printf("Enter the number: ");
    scanf("%d",&dec);
    printf("Reverse number is: %d",Rev(dec));

    return 0;
}
int Rev(int r)
{
    if(r==0) return 0;
    return r%10*count(r)+Rev(r/10);
}
int count(int x)
{
    int count;
    for(count=1;x>10;x=x/10)
        {count=count*10;}

    return count;
}



