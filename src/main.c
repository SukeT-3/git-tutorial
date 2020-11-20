#include <stdio.h>
#include <string.h>
#ifndef __ESPL_LIB_H__
#define __ESPL_LIB_H__

char* num_to_words(unsigned int num);

#endif

int main(){
	unsigned int nmb;  
	int cmp_result;
	char cnt[4], str1[] = "yes";
	 	

	printf("Hello ESPL\n");
	printf("Enter a number : \n");
	scanf("%u", &nmb);

	printf("\nYour Word is: %s \n", num_to_words(nmb));

	printf("Do you wish to run another number?\n");
	printf("yes/no\n");
	scanf("%3s", cnt);
	cmp_result = strcmp(cnt, str1); //comparing strings to find out if they are identical..
					//and based on result handle the situation accordingly

	if (cmp_result == 0){          	//strings are identical--> enter another number

		printf("\nEnter a number: \n");
		scanf("%u", &nmb);
		//strcpy(wrd,num_to_words(nmb));
		printf("\nSecond word is: %s \n",num_to_words(nmb));
	
	} else { 			//strings are not identical--> exit the program

		printf("Goodbye :)");
	
	}
	
	return 0;
}
