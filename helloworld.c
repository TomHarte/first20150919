#include <stdio.h>

int main(int argc,char **argv)
{
	printf("Hello World!\n");
	printf("========================\n");
	printf("Hello Git,I love you!\n");
	unsigned int a;
	while ( a = getchar())
	{
		if ( a != 10){
			printf("%c 's ascii code is :%i\n",a,a);
		};
	};
	return 0;
};
