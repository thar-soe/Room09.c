#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

							
int main(void) {				
							
							FILE *inf;
							FILE *outf;
							inf = fopen(argv[1], "r"); 
							outf = fopen(argv[2], "w"); 
							int optionz = 0; 
							char wordz[20];
							int i = 0;
							int n = 0;
							int k = 0;
							
							if (argc < 3)
							{
								printf("Check it! You're missing some Args, bud \n");
								exit(-1);
								
							}
							
							
							if (inf == NULL)
							{
								printf("Sorry, bud. File cannot not be opened \n"); 
							}
							
							else {
								
								
								printf("WELCOME TO ROOM 9! THE C ROOM of DOOM!!!! \n\n\n\n");
								
								
								printf ("Let Me Know What Chu Wanna do to the WordList: \n"
									"Enter 1 to make the first letter a capital letter \n"
									"Enter 2 to make each word lowercase \n"
									"Enter 3 to make each word uppercase \n"
									"Enter 4 to make each word duplicate 10x and display the total num of duplicates \n"
									);
								scanf( "%d", &optionz); 
								
								if ( optionz == 1)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, " %s", wordz); 
										
										fprintf(outf, "%c%s\n", toupper(wordz[0]), wordz + 1);
						
										i++;
									}
									fclose(inf);
									fclose(outf);
										
									}
								else if ( optionz == 2)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										
										fscanf(inf, "%s", wordz); 
										
										for (k = 0; k < strlen(wordz); k++) 
										{
											wordz[k] = tolower(wordz[k]); 
										}
										
										fprintf(outf, "%s \n", wordz);
										i++;
									}
									
									fclose(inf);
									fclose(outf);
								}
								
								else if (optionz == 3) 
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, "%s", wordz); 
										
										for (k = 0; k < strlen(wordz); k++) 
										{
											wordz[k] = toupper(wordz[k]); 
										}
										fprintf(outf, "%s \n", wordz);
										i++;
									}
									fclose(inf);
									fclose(outf);
									
								}
								
								else if (optionz == 4)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, "%s", wordz); 
										for (k = 0; k < 10; k++) 
										{
											fprintf(outf, "%s \n", wordz); 
												
										}
									}
									
									fclose(inf);
									fclose(outf);
								}
								
								else 
								{
									printf("Sorry but this is not a valid option \n"); 
									
								}
								
								
							}	
							
							return(0); 