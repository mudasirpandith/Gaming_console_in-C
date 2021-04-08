#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
void info();
void rolling_die_game();
int toss();
int roll_die();
void tic_tac_toe_game();
void suduko_game();
void money_puzzle_game();
int roll();
void magic_forest_game();

int main()

{
				int choice;
	
						printf("WELCOME TO GAMIMG WORLD\n\n");
					
				

printf("Press 1 for Snakes and Ladders\n");
printf("Press 2 for Tic Tac Toe Game.\n");
printf("press 3 for Suduko:\n");
printf("Press 4 for Money Puzzel Game.\n");
printf("Press 5 for Magic Forest game\n");
printf("Press 6 for Programmer's Information.\n");			
printf("_________________________________________\n");		
printf("_________________________________________\n");
printf("_________________________________________\n");						
						
scanf("%d",&choice);

				switch(choice)
				{case 1:
								
							 rolling_die_game();	
								break;
								case 2: 
								tic_tac_toe_game();
								break;
				   	 case 3:
           	suduko_game();
								break;
								case 4:
								money_puzzle_game();
								break;
								case 5:
								magic_forest_game();
								break;
							 case 6: 
					   	info();
								default: 
								printf("Invalid input")	;
	}							
		}		


void info()
{
								printf("\n\nName:MUDASIR AHMAD PANDITH\n");
				sleep(3);
				    printf("Branch:ELECTRONICS AND COMMUNICATION ENGINEERING\n");
				sleep(3);
				printf("Year:2020\nEnrolment Number:2020BECE030\n");
				sleep(3);
		printf("E-mail:mudasirpandith789@gmail.com");
						
	}


int toss(){
				int a,x;
			
	
					printf(" \t\tLets toss\n Any player take 1 or 2 for toss");
					scanf("%d",&a);
				x=1+rand()%2;
				if(x==a)
				printf("\nPlayer who chosed number has won the toss\n");
				else 
				printf("\nPlayer who chosed number has lost the toss\n");
			return 0;
			
				
}	
		
				
				
void rolling_die_game()	
				{		
				int x,toss;
				printf("\t\tSnakes And ladder \n\t\n");
				printf("\n\n\t\tTime for toss\n\nchoice 1 or 2:");
				scanf("%d",&toss);
				x=1+rand()%2;
				if(x==toss)
				{
							printf("Player who chosed number has won the toss.\n\nPlayer who won toss has \nPLAYING ID=1 \nand other player has \nPLAYING ID=2");
				}
				else
					{
							printf("You  have lost the toss.\n\nPlayer who won toss has \nPLAYING ID=1 \nand other player has \nPLAYING ID=2\n\n");
				}
				
				
		


			 char arr[101]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',};
				int i=0,id,j=0;
				while(1)
				
				{
								printf("Enter id to roll die:");
								scanf("%d",&id);
								switch(id)
							{
												case 1:
												
													
				
														arr[i]=' ';
								i+=roll();
						
												if(arr[5]=='*'||arr[15]=='*'||arr[43]=='*'||arr[67]=='*'||arr[82]=='*'||arr[93]=='*'||arr[99]=='*')
												{
																i=1;
																arr[i]=arr[1]='*';
																
																printf("Ooops!!...snake ate you \n");
												}
												
												if(arr[9]=='*'||arr[22]=='*'||arr[32]=='*')
												{i=88;
																arr[i]='*';
																
																printf("wow...You climbed ladeer\n");
												}
																								
												if(i>=100)
												{
																printf("player 1 wins");
																goto end;
																break;
												}
								arr[i]='*';
								
		/*		
	printf("_________________________________________\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");	*/
																			
								
								
												
	printf("_________________________________________\n");
	printf("|%c   |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[100],arr[99],arr[98],arr[97],arr[96],arr[95],arr[94],arr[93],arr[92],arr[91]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	
									printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[90],arr[89],arr[88],arr[87],arr[86],arr[85],arr[84],arr[83],arr[82],arr[81]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
															
		
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[80],arr[79],arr[78],arr[77],arr[76],arr[75],arr[74],arr[73],arr[72],arr[71]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
					printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[70],arr[69],arr[68],arr[67],arr[66],arr[65],arr[64],arr[63],arr[62],arr[61]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[60],arr[59],arr[58],arr[57],arr[56],arr[55],arr[54],arr[53],arr[52],arr[51]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[50],arr[49],arr[48],arr[47],arr[46],arr[45],arr[44],arr[43],arr[42],arr[41]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[40],arr[39],arr[38],arr[37],arr[36],arr[35],arr[34],arr[33],arr[32],arr[31]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[30],arr[29],arr[28],arr[27],arr[26],arr[25],arr[24],arr[23],arr[22],arr[21]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[20],arr[19],arr[18],arr[17],arr[16],arr[15],arr[14],arr[13],arr[12],arr[11]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
				printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[10],arr[9],arr[8],arr[7],arr[6],arr[5],arr[4],arr[3],arr[2],arr[1]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								break;
												
								
						
												
										case 2:
								
						arr[j]=' ';
											
								j+=roll();
								
										if(arr[9]=='0'||arr[17]=='0'||arr[34]=='0'||arr[57]=='0'||arr[75]=='0'||arr[83]=='0'||arr[93]=='0'||arr[27]=='0'||arr[37]=='0'||arr[66]=='0'||arr[22]=='0'||arr[99]=='0'||arr[88]=='0')
												{j=1;
																arr[j]=arr[1]='0';
																
																printf("Ooops!!...snake ate you\n");
												}
												
												
												if(arr[9]=='0'||arr[22]=='0'||arr[32]=='0')
												{j=88;
																arr[j]='0';
																
																printf("wow...You climbed ladeer\n");
												}
												
												
												
												if(j>=100)
												{
																printf("player 2 wins");
																goto end;
																
												}
								arr[j]='0';
								
												printf("_________________________________________\n");
	printf("|%c   |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[100],arr[99],arr[98],arr[97],arr[96],arr[95],arr[94],arr[93],arr[92],arr[91]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
	
									printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[90],arr[89],arr[88],arr[87],arr[86],arr[85],arr[84],arr[83],arr[82],arr[81]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
															
		
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[80],arr[79],arr[78],arr[77],arr[76],arr[75],arr[74],arr[73],arr[72],arr[71]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
					printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[70],arr[69],arr[68],arr[67],arr[66],arr[65],arr[64],arr[63],arr[62],arr[61]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[60],arr[59],arr[58],arr[57],arr[56],arr[55],arr[54],arr[53],arr[52],arr[51]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[50],arr[49],arr[48],arr[47],arr[46],arr[45],arr[44],arr[43],arr[42],arr[41]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[40],arr[39],arr[38],arr[37],arr[36],arr[35],arr[34],arr[33],arr[32],arr[31]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[30],arr[29],arr[28],arr[27],arr[26],arr[25],arr[24],arr[23],arr[22],arr[21]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
								printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[20],arr[19],arr[18],arr[17],arr[16],arr[15],arr[14],arr[13],arr[12],arr[11]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
				printf("|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |\n",arr[10],arr[9],arr[8],arr[7],arr[6],arr[5],arr[4],arr[3],arr[2],arr[1]);	
	printf("|___|___|___|___|___|___|___|___|___|___|\n");
								
						
												
								break;
								
								default:
												printf("invalid\n");
								
												break;
								
						
									
												
												
												
														}}
				end:printf("\n\tGame end");
				}


void tic_tac_toe_game(){
				
				char player1[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
					char name1[10],name2[10];
				
				int i;
				
			printf("\t    WELCOME TO TIK TAC TOE\n");
				
				printf("\tDeveloped by:Mudasir Pandith\n \n");
				
							toss();
				
				
				printf("\n\nGuiding table ~~\n")	;	
printf("\t_________________________________\n");
			
printf("        |    0   |      1   |       2    |\n");								
printf("        |        |          |            |\n");								
		printf("\t|________|__________|____________|\n");
				printf("        |        |          |            |\n");	
													
			printf("\t|    3   |     4    |      5     |\n");
				
	printf("\t|________|__________|____________|\n");		
			printf("        |        |          |            |\n");	
printf("        |    6   |     7    |       8    |    \n");								
		printf("\t|________|__________|____________|\n");
													
	
				
					printf("\nEnter name of player 1 who won toss :");
				scanf("%s",name1);
				printf("\nEnter name of player 2:");
				scanf("%s",name2);
				
				
				
			for(int n=0;n<5;n++)
		{		printf("\n%s your symbol is 0 :Enter postion:",name1);
				scanf("%d",&i);

								
						player1[i]='0';
							
								printf("\n\t_________________________________\n");
			
printf("        |     %c  |      %c   |       %c    |    \n",player1[0],player1[1],player1[2]);	
printf("        |        |          |            |\n");								
		printf("\t|________|__________|____________|\n");
		printf("        |        |          |            |\n");												
			printf("\t|     %c  |      %c   |       %c    |\n",player1[3],player1[4],player1[5]);
				
	printf("\t|________|__________|____________|\n");		
			printf("        |        |          |            |\n");	
printf("        |     %c  |      %c   |       %c    |    \n",player1[6],player1[7],player1[8]);								
		printf("\t|________|__________|____________|\n");
													

	if(player1[0]==player1[1]&&player1[0]==player1[2]&&player1[1]==player1[2]&&player1[0]==player1[i]||
							
								
								player1[3]==player1[4]&&player1[3]==player1[5]&&player1[4]==player1[5]&&player1[3]==player1[i]||
								
			player1[6]==player1[7]&&player1[6]==player1[8]&&player1[7]==player1[8]&&player1[6]==player1[i]||					
								
								player1[0]==player1[3]&&player1[0]==player1[6]&&player1[3]==player1[6]&&player1[0]==player1[i]||
								
								
								player1[1]==player1[4]&&player1[1]==player1[7]&&player1[4]==player1[7]&&player1[1]==player1[i]||
								
								player1[2]==player1[5]&&player1[2]==player1[8]&&player1[5]==player1[8]&&player1[2]==player1[i]||
								
								player1[0]==player1[4]&&player1[0]==player1[8]&&player1[4]==player1[8]&&player1[0]==player1[i]||
								
								player1[2]==player1[4]&&player1[2]==player1[6]&&player1[4]==player1[6]&&player1[2]==player1[i]
								
								)
									
								
		
			{	printf("%s wins",name1);
												break;
								}				
										if(n==4)
						{		
												printf("\n\n\tAmazing ...\n\n\tGame went upto last step");
												break;}
								
								printf("\n%s your symbol is *:Enter postion:",name2);
				scanf("%d",&i);
	
				player1[i]='x';
			
printf("\t_________________________________\n");
			printf("        |        |          |            |\n");	
printf("        |     %c  |      %c   |       %c    |    \n",player1[0],player1[1],player1[2]);								
		printf("\t|________|__________|____________|\n");
							printf("        |        |          |            |\n");							
			printf("\t|     %c  |      %c   |      %c     |\n",player1[3],player1[4],player1[5]);
				
	printf("\t|________|__________|____________|\n");		
			printf("        |        |          |            |\n");	
printf("        |   %c    |     %c    |       %c    |   \n",player1[6],player1[7],player1[8]);								
		printf("\t|________|__________|____________|\n");
													
	
								if(player1[0]==player1[1]&&player1[0]==player1[2]&&player1[1]==player1[2]&&player1[0]==player1[i]||
							
								
								player1[3]==player1[4]&&player1[3]==player1[5]&&player1[4]==player1[5]&&player1[3]==player1[i]||
								
			player1[6]==player1[7]&&player1[6]==player1[8]&&player1[7]==player1[8]&&player1[6]==player1[i]||					
								
								player1[0]==player1[3]&&player1[0]==player1[6]&&player1[3]==player1[6]&&player1[0]==player1[i]||
								
								
								player1[1]==player1[4]&&player1[1]==player1[7]&&player1[4]==player1[7]&&player1[1]==player1[i]||
								
								player1[2]==player1[5]&&player1[2]==player1[8]&&player1[5]==player1[8]&&player1[2]==player1[i]||
								
								player1[0]==player1[4]&&player1[0]==player1[8]&&player1[4]==player1[8]&&player1[0]==player1[i]||
								
								player1[2]==player1[4]&&player1[2]==player1[6]&&player1[4]==player1[6]&&player1[2]==player1[i])
									
	
				{printf("%s wins",name2);
										break;	
												
								}				
									
}
										
							
				
			
			
			}
				
						


								
							
void suduko_game()
{
				int i,arr[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
				int n=35;
				char c1[10];
				
				printf("This game is 5×5 Box game ,in which you have to place number from 1 to 5 in boxes such that no coloum or row gets any repeated number.You can change number till you solve it.\n\n");
				
				
				sleep(4);
				
				printf("\n\tLocation table~~\n");
				
				printf("____________________________________________\n");
				printf("|   0    |   1    |    2   |   3    |  4   |\n");
				printf("|________|________|________|________|______|\n");
				printf("|   5    |   6    |    7   |   8    |  9   |\n");
				printf("|________|________|________|________|______|\n");
				printf("|  10    |  11    |   12   |   13   | 14   |\n");
				printf("|________|________|________|________|______|\n");
				printf("|  15    |  16    |   17   |   18   | 19   |\n");
				printf("|________|________|________|________|______|\n");
				printf("|  20    |  21    |   22   |   23   |  24  |\n");
				printf("|________|________|________|________|______|\n");
				
			
				
				
				
				printf("\n\nEnter names of player:");
				scanf("%s",c1);
				while(n>0)
				
			{	printf("\n\n%s enter location:",c1);
				scanf("%d",&i);
				printf("Enter number(1 to 5):\n");
				scanf("%d",&arr[i]);
								
								
								printf("    %s 's table  \n ",c1);
			 printf("___________________________________________\n");
				
				printf("|   %d    |    %d   |   %d    |    %d   |   %d   |\n",arr[0],arr[1],arr[2],arr[3],arr[4]);				
				printf("|________|________|________|________|_______|\n");
								printf("|   %d    |    %d   |   %d    |    %d   |   %d   |\n",arr[5],arr[6],arr[7],arr[8],arr[9]);				
				printf("|________|________|________|________|_______|\n");
					printf("|   %d    |    %d   |   %d    |    %d   |   %d   |\n",arr[10],arr[11],arr[12],arr[13],arr[14]);				
				printf("|________|________|________|________|_______|\n");	
								printf("|   %d    |    %d   |   %d    |    %d   |   %d   |\n",arr[15],arr[16],arr[17],arr[18],arr[19]);				
				printf("|________|________|________|________|_______|\n");	
					printf("|   %d    |    %d   |   %d    |    %d   |   %d   |\n",arr[20],arr[21],arr[22],arr[23],arr[24]);				
				printf("|________|________|________|________|_______|\n");	
														if(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]==15&&
								arr[5]+arr[6]+arr[7]+arr[8]+arr[9]==15&&
								arr[10]+arr[11]+arr[12]+arr[13]+arr[14]==15&&
						 	arr[15]+arr[16]+arr[17]+arr[18]+arr[19]==15&&
								arr[20]+arr[21]+arr[22]+arr[23]+arr[24]==15&&
								
								arr[0]+arr[5]+arr[10]+arr[15]+arr[20]==15&&
								arr[1]+arr[6]+arr[11]+arr[16]+arr[21]==15&&
								arr[2]+arr[7]+arr[12]+arr[17]+arr[22]==15&&
						 	arr[3]+arr[8]+arr[13]+arr[18]+arr[23]==15&&
								arr[4]+arr[9]+arr[14]+arr[19]+arr[24]==15)
								
								{
												printf("%s wins.",c1);
												break;
								}
					
								
								
								
								n--;
								
							
							printf("\nMoves left=%d\n",n);	
											
								

				if(n==1)
				
	{	printf("\tNo move left.\n\tBetter luck next time");
				
								break;}}
			}



void money_puzzle_game()
{
	
				srand(time(NULL));
				float y=15+rand()%100;
				printf("\tPUZZLE GAME WITH MONEY\n\n");
				printf("Take any amount of rupees in your mind.\n\n");
				sleep(5);
				printf("Double the amount that you have chosen.\n\n");
				sleep(4);
				printf("Add my %.0f  to your total amount\n\n",y);
				sleep(5);
				printf("Divide the total amount by 2 \n\n");
				sleep(5);
				printf("Give one half to your friend\n\n");
				sleep(5);
				
				printf("Subtract the initail amount from another half\n\n");
				sleep(5);
				printf("Reading your brain.....\n");
				sleep(5);
				printf("The amount left=Rs.%.1f",y/2);
}

void magic_forest_game()
{
				char name1[10],name2[1];
				int num1,num2,c,guess,count1=0,count2=0;
				
				printf("Enter the name of player 1:");
				scanf("%s",name1);
			printf("Enter the name of player2:");
			scanf("%s",name2);
				
				printf("You two %s and %s are going though forest and you are  caught  by a witch .Witch tells you only one will go back and gives you a way to escape . She gives you a box that gives number every 2 seconds and you have to guess whether the number is even or odd.One who will guess 10 numbers correctly will go home.\n\n",name1,name2);
			sleep(5);
					printf("Get to Play");
				sleep(3);
				while(1){
back:
				printf("\n %s it your turn to guess",name1);
										printf("\nGuess:\n1 for even\n0 for odd\n:");	
								scanf("%d",&guess);
								if(guess==roll_die())
								{
												sleep(1);
												printf("\n\t\t\tWow......Correct");
												count1=count1+1;
																printf("\n\t\t\t%s Correct guesses=%d\n",name1,count1);
																if(count1==10)
																{
																				printf("%s has conpleted the task .\nGo to your home\n\n %s ,you will come with me to world of magic\n",name1,name2);
																				break;
																}
								
								else goto next;}
								
												else
												{ sleep(1);
																printf("\n\t\t\tOppps...Wrong..");
												printf("\n\t\t\t%s Correct guess=%d\n",name1,count1);
												
												}

									next:			
							printf("\n%s it your turn to guess",name2);
												printf("\nGuess:\n1 for even\n0 for odd\n:");	
								scanf("%d",&guess);
								if(guess==roll_die())
								{
												sleep(1);
												printf("\n\t\t\tWow......Correct");
												count2=count2+1;
																printf("\n\t\t\t %s Correct guesses=%d\n",name1,count2);
																
												if(count2==10)
																{
																				printf("%s has conpleted the task .\nGo to your home\n\n %s ,you will come with me to world of magic\n",name2,name1);
																				break;
																}		
												else goto back;
													}
																	
														
												else
												{
												sleep(1);
																printf("\n\t\t\tOppps...Wrong..");
												printf("\n\t\t\t %s Correct guess=%d\n",name2,count2);
												}
												
								
								
							}					}

int roll_die()
{
				srand(time(NULL));
				int x=rand()%100;
				int y=x%2;
				return y;
}

int roll()
{
				srand(time(NULL));
				int x=1+rand()%6;
				printf("\n\t\tdie roll=%d\n",x);
				return x;
}
				1