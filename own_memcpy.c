#include<stdio.h>

void mem_cpy(void *src, void *dest, int n)
{
		char *src1 = (char*)src;
		char *dest1 = (char*)dest;
		for(int i=0;i<n;i++)
		{
				dest1[i] = src1[i];
		}
}

int main()
{
		char src[] = "sunitha"; 
		char dest[20] = "sindhu";
		printf("Before copy dest = %s\n", dest); 
		printf("Before copy src = %s\n", src); 
		mem_cpy(src, dest,7);
		printf("After copy dest = %s\n", dest);
}

