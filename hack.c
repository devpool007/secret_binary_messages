#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

	FILE *fptr;
	char filename[15];
	char ch;
	printf("Enter file name:\n");
	scanf("%s", filename);
    /*  open the file for reading */
    fptr = fopen(filename, "r");
        ch = fgetc(fptr);

    long count = 0,i =0;

    char data[8];
    while (ch != EOF)
    {
    	count++;
    	data[i] = ch;
    	i++;
    	if(count%8==0){
    		char c = strtol(data, 0, 2);
    		printf("%c", c);
    		i = 0;
    	}
        ch = fgetc(fptr);
    }
    printf("\n\n\nNUMBER OF CHARS: ********%ld********\n",count );
    fclose(fptr);


    
    
    return(0);
}
