#include<stdio.h>
int main()
{
	int a=1;
	unsigned int b=2;
	signed int c=3;
	
	printf("\n\nsize of int var= %ld\nsize of unsigned int var= %ld\nsize of signed int var= %ld",sizeof(a),sizeof(b),sizeof(c));
	
	short int d=4;
	unsigned short int e=5;
	signed short int f=6;
	
	printf("\n\nsize of short int var= %ld\nsize of unsigned short int var= %ld\nsize of signed short int var= %ld",sizeof(d),sizeof(e),sizeof(f));
	
	long int g=7;
	unsigned long int h=8;
	signed long int i=9;
	
	printf("\n\nsize of long int var= %ld\nsize of unsigned long int var= %ld\nsize of signed long int var= %ld",sizeof(g),sizeof(h),sizeof(i));
	
	char j='a';
	unsigned char k='b';
	signed char l='c';
	
	printf("\n\nsize of char var= %ld\nsize of unsigned char var= %ld\nsize of signed char var= %ld",sizeof(j),sizeof(k),sizeof(l));
	
	float m=1;
	double n=2;
	long double o=3;
	
	printf("\n\nsize of float var= %ld\nsize of double var= %ld\nsize of long double var= %ld",sizeof(m),sizeof(n),sizeof(o));
	
	printf("\n\n=============================");
	
	int *A=&a;
	unsigned int *B=&b;
	signed int *C=&c;
	
	printf("\n\nsize of int ptr= %ld\nsize of unsigned int ptr= %ld\nsize of signed int ptr= %ld",sizeof(A),sizeof(B),sizeof(C));
	
	short int *D=&d;
	unsigned short int *E=&e;
	signed short int *F=&f;
	
	printf("\n\nsize of short int ptr= %ld\nsize of unsigned short int ptr= %ld\nsize of signed short int ptr= %ld",sizeof(D),sizeof(E),sizeof(F));
	
	long int *G=&g;
	unsigned long int *H=&h;
	signed long int *I=&i;
	
	printf("\n\nsize of long int ptr= %ld\nsize of unsigned long int ptr= %ld\nsize of signed long int ptr= %ld",sizeof(G),sizeof(H),sizeof(I));
	
	char *J=&j;
	unsigned char *K=&k;
	signed char *L=&l;
	
	printf("\n\nsize of char ptr= %ld\nsize of unsigned char ptr= %ld\nsize of signed char ptr= %ld",sizeof(J),sizeof(K),sizeof(L));
	
	float *M=&m;
	double *N=&n;
	long double *O=&o;
	
	printf("\n\nsize of float ptr= %ld\nsize of double ptr= %ld\nsize of long double ptr= %ld",sizeof(M),sizeof(N),sizeof(O));
	return 0;
}
