#include <stdio.h>
#include <string.h>

void vulnerable(char * string)
{
	char buffer[1024];
	printf("* ");
	strcpy(buffer, string);
	printf(buffer);
	printf("\n");
	char * ag = "meml3akd}";
	printf("\n[+] parte2 em: %p\n", ag);
}

int main(int argc, char*argv[])
{
	printf("* Parte 2!\n");
	vulnerable(argv[1]);
	return 0;
}
