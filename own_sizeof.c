#include<stdio.h>

int size_of(int x, double a)
{
		int size1 = (char*)(&x+1) - (char*)(&x);
		int size2 = (char*)(&a+1) - (char*)(&a);
		printf("Size of int = %d\n", size1);
		printf("Size of double = %d\n", size2);
}

int main()
{
		int x;
		double a;
		size_of(x, a);
}

//char pointer is used to typecast the resultant value(pointer airthematic result) to 1 byte.
