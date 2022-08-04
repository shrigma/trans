//start includes
#include <stdio.h>
//start defs
#define RESET "\x1b[0m"
#define BLUE "\x1b[34m"
#define PINK "\x1b[35m"
#define WHITE "\x1b[0;37m"
//define static var
static char text[1024];
//start main

int main(int argc, char *argv[])
{
	switch(argc)
	{
		case 1:
			for(;;)
			{
				if(fgets(text, 1024, stdin) == NULL)
				{
					if(feof(stdin) != 0)
					{
						return 0;
					}
					else
					{
						fputs("ERR: Failed to read from stdin", stderr);
						return 1;
					}
				}
				fprintf(stdout, BLUE "%s" RESET, text);
				fprintf(stdout, PINK "%s" RESET, text);
				fprintf(stdout, WHITE "%s" RESET, text);
				fprintf(stdout, PINK "%s" RESET, text);
				fprintf(stdout, BLUE "%s" RESET, text);
			}
			break;
		case 2:
			fprintf(stdout, BLUE "%s" RESET "\n", argv[1]);
			fprintf(stdout, PINK "%s" RESET "\n", argv[1]);
			fprintf(stdout, WHITE "%s" RESET "\n", argv[1]);
			fprintf(stdout, PINK "%s" RESET "\n", argv[1]);
			fprintf(stdout, BLUE "%s" RESET "\n", argv[1]);
			break;
		default:
			fprintf(stderr, "ERR: too many args %s expects 1 arg", argv[0]);
			break;
	}
}
