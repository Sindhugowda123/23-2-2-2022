#include<stdio.h>
#include<string.h>

int flag =-1;
char freq[20];

int freq_char(char *str, int len)
{
		int count=1;
		for(int i=0;i<len;i++)
		{
				count=1;
				for(int j=i+1; j<len;j++)
				{
				   if(str[i] == str[j])
				   {
						count++;
						freq[j] = flag;
				   }
				}
				if(freq[i] != flag)
				   freq[i] = count;
		}
}

void print_freq(char *str, int len)
{
		printf("Frequency of each character is :\n");
		for(int i=0;i<len;i++)
		{
				if(freq[i] != flag)
				{
						printf("%c %d\n", str[i], freq[i]);
				}
		}
}

int main()
{
		char str[] = "abcabcddd";
		int len = strlen(str);
		freq_char(str, len);
		print_freq(str, len);
}

