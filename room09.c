#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void main (void)
{
	        int x, y, z, i, h, g, k, choice; 
		 char name[256];
		
		
		 printf("Please enter your name: ");
		 scanf("%s", name); 

		printf("Hello, %s. You only have one choice of the room \n", name);
		printf("What do you want to do? \n"); 
		printf("Open the door, or stay safe and NOT open it \n" ); 
		printf("Type 'O' to open and Type 's' to stay \n"); 
		scanf("%c", choice); 


		if (choice == 'O'|| choice == 'o')
		{
			printf("You have fallen into a vat of acid. :( \n"); 
			printf("Wait....\n");
			printf("As you flail your limbs around in desparation as you fall, one of your limbs get caught in a branch. \n");
			printf("You open your eyes and see another door in the darkness.\n");
			scanf("%c", choice); 
			if (tolower(choice) == 'o')
			{

				printf("You've found the stairway to heaven! \n");
				printf("Type 'g' to go or type 'c' to continue falling \n");
				if (tolower(choice) == 'g' )
				{
					printf("Oh wow, everything's shiny and it's so bright!!!! You forgot your sunglasses. \n");





				}



			}
			



		}

		else if (choice == 's' || choice == 'S')
		{
			printf("Oh good, you're completely safe"); 



		}



}
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
-- INSERT --                                                  12,2          All

