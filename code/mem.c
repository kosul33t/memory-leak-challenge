#include <stdio.h>
#include <string.h>

void vuln(char * string)
{
	char buffer[1024];
        printf(">> ");
        strcpy(buffer, string);
	printf(buffer);
        printf("\n");
	char * fl = "flag{";
	printf("\n[+] parte1 em: %p\n", fl);
}

int main(int argc, char*argv[])
{
        vuln(argv[1]);
        return 0;
}
