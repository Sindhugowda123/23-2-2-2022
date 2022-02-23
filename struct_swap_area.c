#include<stdio.h>

#define swap(a,b) (a^=b^=a^=b)

typedef struct Rect
{
	unsigned int len;
	unsigned int wid;
	unsigned int area;
}s;

void fun(struct Rect var)
{
	var.area = var.len * var.wid;
	printf("Area = %d\n", var.area);
}

int main()
{
	s var = {10, 20};
	printf("Before swapping = %d %d\n", var.len, var.wid);
	swap(var.len, var.wid);
	printf("After swapping = %d %d\n", var.len, var.wid);
	void (*fptr)(struct Rect) = fun;
	fptr(var);
}

