#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	char str[100 + 1];
	int isfirst = 1;
	char ch;
	int i = 0;

	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			if (isfirst == 1)
			{
				ch = toupper(ch);
				isfirst = 0;
			}
		}
		else
		{
			isfirst = 1;

		}
		str[i++] = ch;
	}
	str[i] = '\0';
	printf("%s\n", str);

	return 0;
}