#include <stdio.h>
int main()
{
    int a=-1;signed int b=-1;unsigned int c=-1;
    printf("a=%d\nb=%d\nc=%u",a,b,c);
    
    short int d=-2;signed short int e=-2;unsigned short int f=-2;
    printf("\n\nd=%d\ne=%d\nf=%u",d,e,f);
    
    long int g=-3;signed long int h=-3;unsigned long int i=-3;
    printf("\n\ng=%ld\nh=%ld\ni=%lu",g,h,i);
    return 0;
}