#include main.h
char *string_toupper(char *str)
{
	int index = 0;
	while(sttr[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index]-= 32;
		index++;
	}
	return(str);
}
