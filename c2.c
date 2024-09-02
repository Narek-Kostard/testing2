#include <stdio.h>

int cmp(char* s1, char* s2)
{
	while(*s1 != '\0' || *s2 != '\0')
	{
		if(*s1 != *s2)
		{
			return *s1 - *s2;
		}
		++s1;
		++s2;
	}
	return 0;

}

int main()
{
	char str[] = "Hello";
	char str1[] = "Hello";
	printf("%d \n",cmp(str,str1));
	return 0;
}
