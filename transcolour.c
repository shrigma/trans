//start includes
#include <stdio.h>
//start defs
#define RESET "\x1b[0m"
#define BLUE "\x1b[1;34m"
#define PINK "\x1b[35m"
#define WHITE "\x1b[0;37m"
#define DEFAULT_STR "███████████████████"
//start main
int main(int argc, char *argv[])
{
	switch(argc)
	{
		case 1:
			/********************\
			 *print default flag*
			\********************/

			fprintf(stdout, BLUE DEFAULT_STR RESET "\n");
			fprintf(stdout, PINK DEFAULT_STR RESET "\n");
			fprintf(stdout, WHITE DEFAULT_STR RESET "\n");
			fprintf(stdout, PINK DEFAULT_STR RESET "\n");
			fprintf(stdout, BLUE DEFAULT_STR RESET "\n");
			return 0;
			break;
		case 2:
			/*******************\
			 *print custom flag*
			\*******************/
	
			fprintf(stdout, BLUE "%s" RESET "\n", argv[1]);
			fprintf(stdout, PINK "%s" RESET "\n", argv[1]);
			fprintf(stdout, WHITE "%s" RESET "\n", argv[1]);
			fprintf(stdout, PINK "%s" RESET "\n", argv[1]);
			fprintf(stdout, BLUE "%s" RESET "\n", argv[1]);
			return 0;
			break;
		default:
			/**************\
			 *print errors*
			\**************/

			fputs("ERR: too many args expects maximum of 1 arg\n", stderr);
			return 1;
			break;
	}
}
