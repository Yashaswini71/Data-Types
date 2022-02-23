#include <stdio.h>
int main() 
{ 
	long double b=55;   
	printf("b=%0.5Lf(5 digit precison)\n",b);    
	printf("b=%0.10Lf(10 digit precison)\n\n",b);    
	printf("b=%Lf(14 digit precison)",b);    
	return 0;
}
