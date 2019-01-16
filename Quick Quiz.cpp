#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


void help();

int main()
     {
     int d=0,subject,answer,difficulty,correct=0,wrong=0;
     int score=0;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t\t\t________________________________________");

     printf("\n\t\t\t\t\t   WELCOME ");
     printf("\n\t\t\t\t\t      to ");
     printf("\n\t\t\t\t\t   THE GAME ");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t________________________________________"); 
     printf("\n\t\t\t\t > Press S to start the game");
     printf("\n\t\t\t\t > press H for help ");
     printf("\n\t\t\t\t > press Q to quit  ");
     printf("\n\t\t\t\t________________________________________\n\n");
     choice=toupper(getch());
     
     if(choice=='H')
     {
     	help();
     	
     	goto mainhome;
	 }
	
	 else if(choice=='Q')
	 quit:
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
    
 
     gets(playername);
     difficulty:
     system("cls");

	printf("\n\n\n\n\n\n\n\t\t\t\t\tEnter Difficulty level:\n\n\n\n");
	printf("\t\t\t\t\t\t1.Easy\n\n\t\t\t\t\t\t2.Medium\n\n\t\t\t\t\t\t3.Hard\n\n");
	
	
	scanf("%d",&difficulty);
	
    system("cls");
    if(difficulty==1)
    {
	printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 5 easy questions of C programming  in this Quiz Game");
    printf("\n    u get +3 for each correct answer & -1 for each wrong/invalid answer.");
    
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\nYou can use 50-50 life line only once in a game");
    
    
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     	system("cls");
    	printf("\t\t\t\t\tlets begin the quiz......\n\n");
    	
	
		printf("The quiz has 5 very basic questions on the C Programming Language.");
		printf("u get +3 for each correct answer & -1 for each wrong/invalid answer.\n\n");
		printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		q1:
		printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
		printf("\nQ1) Why is it called 'C' & not 'D'?\n");
        printf("1.C stands for code\t2.The inventor's name started with a C\n");
		printf("3.It developed after a language called 'B'\t 4.Why should I care?\n"); 
		printf("Your Answer: ");
		scanf("%d",&answer);
		
		switch(answer)
		{
			case 3:
				{
				printf("correct answer");
				correct=correct+1;
				score=score+3;
				getch();
			break;}
			case 5:
				{
					
				d=++d;
				if(d==1)
			{ 
			l1:
				
				system("cls");
				printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
					printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
			printf("\nQ1) Why is it called 'C' & not 'D'?\n");
        printf("1.C stands for code\t\n");
		printf("3.It developed after a language called 'B'\n"); 
		printf("Your Answer: ");
		scanf("%d",&answer);
		if(answer==3)
		{
			printf("correct answer");
			correct=correct+1;
			score=score+3;
			getch();
		}
		else if(answer!=3)
		{
			printf("wrong answer");
			wrong=wrong+1;
			score=score-1;
			getch();
		}
		else
		{
		printf("\ninvalid number.....choose again\n");
		goto l1;
	}
		}
		else
		{
			printf("no  life line");
			getch();
				 system("cls");
			goto q1;
		}
		break;}
		default:
			{
				printf("wrong");
				wrong=wrong+1;
				score=score-1;
				getch();
			}}
system("cls");

q2:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for Life Line\n\n");
      printf("\nQ) It was developed at?\n");
       printf("1.IBM\t2.Bell Labs\n3.MIT\t4.Microsoft(?)\n");
      printf("Your Answer: ");
	  scanf("%d",&answer);
		switch(answer)
		{
			case 2:
				{
					printf("Correct answer");
					correct=correct+1;
					score=score+3;
					getch();
					break;
					
				}
				case 5:
					{
						system("cls");
						printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
						d=++d;
						if(d==1)
						{l2:
						printf("\nQ) It was developed at?\n");
       						printf("2.Bell Labs\n4.Microsoft\n");
      						printf("Your Answer: ");
	  						scanf("%d",&answer);
	  						if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
								score=score+3;
	  							getch();
							  }
							  else if(answer!=2)
							  {
							  	printf("wrong answer");
							  	wrong=wrong+1;
								  score=score-1;
							  	getch();
							  }
							  else
							  {
							  	printf("invalid choice.........please choose again\n\n");
							  	getch();
							  	goto l2;
							  }
							
							break;
							
							
						}
						else
						{
							printf("You don't have any life line");
							getch();
				 system("cls");
							goto q2;
														break;
							
						}
						
					}
					default:
						{
							printf("wrong answer");
							wrong=wrong+1;
							score=score-1;
							getch();
						}
						
		}
system("cls");

q3:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which of these is not a C keyword as per ANSI C ?\n");
 printf("1.externt\t2.volatilen\n3.entert\t4.break\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
 switch(answer)
 {
 	case 3:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		
				 if(d==1)
		 		{system("cls");
				 printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		 		
		 				printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which of these is not a C keyword as per ANSI C ?\n");
 printf("1.externt\t\n3.entert\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==3)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }
		 			
		 			break;
				 
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 
				 goto q3;
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }

system("cls");
q4:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) What is ANSI, btw? \n");
 printf("1.Area of Natural and Scientific Interest\t");
 printf("2.American National Standards Institute\n");
 printf("3.American National Standardization Institute\t");
 printf("4.break\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 2:
 		{
 			printf("correct ");
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		 			printf("\nQ) What is ANSI, btw? \n");
printf("2.American National Standards Institute\n");
 printf("3.American National Standardization Institute\t");

 printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	score=score-1;
							  	wrong=wrong+1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto q4;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		score=score-1;
			 		wrong=wrong+1;
			 		getch();
				 }
		 
 }
system("cls");
q5:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which of these concepts is NOT supported by C ?\n");
 printf("1.Pointers\t2.Functions\n3.Strings\t4.Namespaces\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 4:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
printf("\nQ) Which of these concepts is NOT supported by C ?\n");
 printf("1.Pointers\t\n4.Namespaces\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto q5;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }
system("cls");
		printf("\n\n***********************************************************************************************************************\n");


printf("\n\n\n\n\t\t\t\t\tThank You for taking the Quiz.\n\t\t\t\t\t Your Total Score is %d out of 15\n\n\n\n\n",score);
		printf("***********************************************************************************************************************\n\n");



end:
printf("\t\tPress R to go to main menu\t\t\t\t\tQ for Quit\n");

     choice=toupper(getch());
if(choice=='R')
{
	goto mainhome;
}
else if(choice=='Q')
{
	goto quit;
	getch();
}
else
{ printf("Invalid choice");
	getch();
	system("cls");
	goto end;
}
}


else if(difficulty==2)
{
	
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 5 medium questions of C programming  in this Quiz Game");
    printf("\n    u get +3 for each correct answer & -1 for each wrong/invalid answer.");
    
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\nYou can use 50-50 life line only once in a game");
    
    
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto homem;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     homem:
     	system("cls");
    	printf("\t\t\t\t\tlets begin the quiz......\n\n");
	
		printf("The quiz has 5 very basic questions on the C Programming Language.");
		printf("u get +3 for each correct answer & -1 for each wrong/invalid answer.\n\n");
		printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		mq1:
		printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
		printf("\nQ1) C programs are converted into machine language with the help of\n");
        printf("1.An Editor\t2.A compiler\n");
		printf("3.An operating system\t 4.none of these\n"); 
		printf("Your Answer: ");
		scanf("%d",&answer);
		
		switch(answer)
		{
			case 2:
				{
				printf("correct answer");
				correct=correct+1;
				score=score+3;
				getch();
			break;}
			case 5:
				{
					
				d=++d;
				if(d==1)
			{ 
			ml1:
				
				system("cls");
				printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
					printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
			printf("\nQ1) C programs are converted into machine language with the help of\n");
        printf("1.An Editor\t\n");
		printf("2.A Compiler\n"); 
		printf("Your Answer: ");
		scanf("%d",&answer);
		if(answer==2)
		{
			printf("correct answer");
			correct=correct+1;
			score=score+3;
			getch();
		}
		else if(answer!=2)
		{
			printf("wrong answer");
			wrong=wrong+1;
			score=score-1;
			getch();
		}
		else
		{
		printf("\ninvalid number.....choose again\n");
		goto ml1;
	}
		}
		else
		{
			printf("no  life line");
			getch();
				 system("cls");
			goto mq1;
		}
		break;}
		default:
			{
				printf("wrong");
				wrong=wrong+1;
				score=score-1;
				getch();
			}}
system("cls");

mq2:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for Life Line\n\n");
      printf("\nQ) C was primarily developed as\n");
       printf("1.System programming language\t2.General purpose language\n3.Data processing language\t4.none of these\n");
      printf("Your Answer: ");
	  scanf("%d",&answer);
		switch(answer)
		{
			case 1:
				{
					printf("Correct answer");
					correct=correct+1;
					score=score+3;
					getch();
					break;
					
				}
				case 5:
					{
						system("cls");
						printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
						d=++d;
						if(d==1)
						{ml2:printf("\nQ) C was primarily developed as\n");
       printf("1.System programming language\t\n3.Data processing language\n");

      						printf("Your Answer: ");
	  						scanf("%d",&answer);
	  						if(answer==1)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
								score=score+3;
	  							getch();
							  }
							  else if(answer!=1)
							  {
							  	printf("wrong answer");
							  	wrong=wrong+1;
								  score=score-1;
							  	getch();
							  }
							  else
							  {
							  	printf("invalid choice.........please choose again\n\n");
							  	getch();
							  	goto ml2;
							  }
							
							break;
							
							
						}
						else
						{
							printf("You don't have any life line");
							getch();
				 system("cls");
							goto mq2;
														break;
							
						}
						
					}
					default:
						{
							printf("wrong answer");
							wrong=wrong+1;
							score=score-1;
							getch();
						}
						
		}
system("cls");

mq3:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Standard ANSI C recognizes ________ number of keywords?\n");
 printf("1.30\t2.32\n3.24\t4.36\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
 switch(answer)
 {
 	case 2:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		
				 if(d==1)
		 		{system("cls");
				 printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		 		
		 				printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Standard ANSI C recognizes ________ number of keywords?\n");
 printf("1.30\t2.32\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }
		 			
		 			break;
				 
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 
				 goto mq3;
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }

system("cls");
mq4:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which one the the following is not a reserved keyword for C? \n");
 printf("1.auto\t");
 printf("2.case\n");
 printf("3.main\t");
 printf("4.default\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 3:
 		{
 			printf("correct ");
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
printf("\nQ) Which one the the following is not a reserved keyword for C? \n");
 printf("1.auto\t");

 printf("3.main\n");


 printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==3)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	score=score-1;
							  	wrong=wrong+1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto mq4;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		score=score-1;
			 		wrong=wrong+1;
			 		getch();
				 }
		 
 }
system("cls");
mq5:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which one of the following is not a valid identifier?\n");
 printf("1._examtime\t2.1examtime\n3.exam_time\t4.examtime1\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 2:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
printf("\nQ) Which one of the following is not a valid identifier?\n");
 printf("1._examtime\t2.1examtime\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto mq5;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }
system("cls");
		printf("\n\n***********************************************************************************************************************\n");


printf("\n\n\n\n\t\t\t\t\tThank You for taking the Quiz.\n\t\t\t\t\t Your Total Score is %d out of 15\n\n\n\n\n",score);
		printf("***********************************************************************************************************************\n\n");



mend:
printf("\t\tPress R to go to main menu\t\t\t\t\tQ for Quit\n");

     choice=toupper(getch());
if(choice=='R')
{
	goto mainhome;
}
else if(choice=='Q')
{
	goto quit;
	getch();
}
else
{ printf("Invalid choice");
	getch();
	system("cls");
	goto mend;
}
}
else if(difficulty==3)

{  printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 5 hard questions of C programming  in this Quiz Game");
    printf("\n    u get +3 for each correct answer & -1 for each wrong/invalid answer.");
    
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\nYou can use 50-50 life line only once in a game");
    
    
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto homed;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     homed:
     	system("cls");
    	printf("\t\t\t\t\tlets begin the quiz......\n\n");
    
	
		printf("The quiz has 5 very basic questions on the C Programming Language.");
		printf("u get +3 for each correct answer & -1 for each wrong/invalid answer.\n\n");
		printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		dq1:
		printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
		printf("\nQ1) The first expression in a for loop is\n");
        printf("1.Step value of loop\t2.value of the counter variable\n");
		printf("3.any of above\t 4.none of these\n"); 
		printf("Your Answer: ");
		scanf("%d",&answer);
		
		switch(answer)
		{
			case 2:
				{
				printf("correct answer");
				correct=correct+1;
				score=score+3;
				getch();
			break;}
			case 5:
				{
					
				d=++d;
				if(d==1)
			{ 
			dl1:
				
				system("cls");
				printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		printf("\nQ1) The first expression in a for loop is\n");
        printf("1.Step value of loop\t2.value of the counter variable\n");
		
		printf("Your Answer: ");
		scanf("%d",&answer);
		if(answer==2)
		{
			printf("correct answer");
			correct=correct+1;
			score=score+3;
			getch();
		}
		else if(answer!=2)
		{
			printf("wrong answer");
			wrong=wrong+1;
			score=score-1;
			getch();
		}
		else
		{
		printf("\ninvalid number.....choose again\n");
		goto dl1;
	}
		}
		else
		{
			printf("no  life line");
			getch();
				 system("cls");
			goto dq1;
		}
		break;}
		default:
			{
				printf("wrong");
				wrong=wrong+1;
				score=score-1;
				getch();
			}}
system("cls");

dq2:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for Life Line\n\n");
      printf("\nQ)A member is a\n");
       printf("1.Variable in a structure\t2.datatype of sturcture\n3.structure pointer\t4.none of above\n");
      printf("Your Answer: ");
	  scanf("%d",&answer);
		switch(answer)
		{
			case 1:
				{
					printf("Correct answer");
					correct=correct+1;
					score=score+3;
					getch();
					break;
					
				}
				case 5:
					{
						system("cls");
						printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
						d=++d;
						if(d==1)
						{dl2:
						printf("\nQ)A member is a");
       printf("1.Variable in a structure\t2.datatype of sturcture\n");
      						printf("Your Answer: ");
	  						scanf("%d",&answer);
	  						if(answer==1)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
								score=score+3;
	  							getch();
							  }
							  else if(answer!=1)
							  {
							  	printf("wrong answer");
							  	wrong=wrong+1;
								  score=score-1;
							  	getch();
							  }
							  else
							  {
							  	printf("invalid choice.........please choose again\n\n");
							  	getch();
							  	goto dl2;
							  }
							
							break;
							
							
						}
						else
						{
							printf("You don't have any life line");
							getch();
				 system("cls");
							goto dq2;
														break;
							
						}
						
					}
					default:
						{
							printf("wrong answer");
							wrong=wrong+1;
							score=score-1;
							getch();
						}
						
		}
system("cls");

dq3:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which operator has the highest priority\n");
 printf("1.()\t2.[]\n3.*\t4./\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
 switch(answer)
 {
 	case 1:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		
				 if(d==1)
		 		{system("cls");
				 printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
		 		
		 				printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) Which operator has the highest priority\n");
 printf("1.()\t\n4./\n");
  printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==1)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }
		 			
		 			break;
				 
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 
				 goto dq3;
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }

system("cls");
dq4:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) What is the purpose of getc? \n");
 printf("1.Read a character from STDIN\t");
 printf("2.read a character from a file\n");
 printf("3.read all file\t");
 printf("4.read file random\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 2:
 		{
 			printf("correct ");
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
printf("\nQ) What is the purpose of getc? \n");
 printf("1.Read a character from STDIN\t");
 printf("2.read a character from a file\n");

 printf("Your Answer: ");
 scanf("%d",&answer);
 if(answer==2)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	score=score-1;
							  	wrong=wrong+1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto dq4;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		score=score-1;
			 		wrong=wrong+1;
			 		getch();
				 }
		 
 }
system("cls");
dq5:
	printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
	printf("Press 1 for A\t Press 2 for B\t Press 3 for C \t Press 4 for D and \tPress 5 for 50-50\n\n");
printf("\nQ) To access the members of structure which symbol is used\n");
 printf("1.*\t2.-\n3.,\t4..\n");
 printf("Your Answer: ");
 scanf("%d",&answer);

 switch(answer)
 {
 	case 4:
 		{
 			printf("correct ");
 			correct=correct+1;
 			score=score+3;
 			getch();
 			break;
		 }
		 case 5:
		 	{
		 		d=++d;
		 		if(d==1)
		 		{system("cls");
		 			printf("***********************************************************************************************************************\n");
		printf("\t\tcorrect\t\t\t\t\twrong\t\t\t\t\tscore\n");
		printf("\t\t%d\t\t\t\t\t%d\t\t\t\t\t%d\n\n",correct,wrong,score);
		printf("***********************************************************************************************************************\n\n");
printf("\nQ) To access the members of structure which symbol is used\n");
 printf("2. -\n\t4. .\n");
 printf("Your Answer: ");
 scanf("%d",&answer);
if(answer==4)
	  						{
	  							printf("correct answer");
	  							correct=correct+1;
	  							score=score+3;
	  							getch();
							  }
							  else
							  {
							  	printf("wronng answer");
							  	wrong=wrong+1;
							  	score=score-1;
							  	getch();
							  }


		 			break;
				 }
				 else
				 printf("no life line");
				 getch();
				 system("cls");
				 goto dq5;
				 getch();
				 break;
			 }
			 default:
			 	{
			 		printf("wrong answer");
			 		wrong=wrong+1;
			 		score=score-1;
			 		getch();
				 }
		 
 }
system("cls");
		printf("\n\n***********************************************************************************************************************\n");


printf("\n\n\n\n\t\t\t\t\tThank You for taking the Quiz.\n\t\t\t\t\t Your Total Score is %d out of 15\n\n\n\n\n",score);
		printf("***********************************************************************************************************************\n\n");

dend:
printf("\t\tPress R to go to main menu\t\t\t\t\tQ for Quit\n");

     choice=toupper(getch());
if(choice=='R')
{
	goto mainhome;
}
else if(choice=='Q')
{
	goto quit;
	getch();
}
else
{ printf("Invalid choice");
	getch();
	system("cls");
	goto dend;
}
	
}
else
{
	printf("Invalid choice");
	getch();
	goto difficulty;
}

}}

void help()

	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> First You have to Enter Your Name...");
    printf("\n >> Then you have to choose Difficulty for Quiz.");
 
    
    printf("\n >> There are 5 questions in each category.");
    
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> right answer will give you +3 score and wrong answer will deduct your -1 marks.");
	printf("\n>> You can use 50-50 life line once in a game");   
	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\n\n\t\t\t Press any other key to return to the main menu!");
	getch();
	
}


