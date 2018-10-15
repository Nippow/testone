#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	 
	char str[] = "cheval";
	char *p_str2 = NULL;

	int size = strlen(str);

	p_str2 = (char*) malloc((size+1)*sizeof(char));

	strcpy(p_str2, str);

	if(!strcmp(str, p_str2))
	{
		printf("identiques, copie OK\n");
	}

	return 0;
}