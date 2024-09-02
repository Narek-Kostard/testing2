#include <stdio.h>

char* chr(char* str, char character)
{
	while(*str != '\0')
	{
		if(*str == character)
		{
			return str;
		}
		++str;
	}
	return NULL;
}


int main()
{
	char str[] = "Hello";
	char ch = 'o';
	printf("%p \n", chr(str,ch));
	return 0;
}
