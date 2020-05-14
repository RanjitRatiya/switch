//Program to get choice from user and print answer using Switch-Case
#include<stdio.h>
#include<conio.h>
main()
{
	int price;
	printf("\n Hey Fuddy!! \n You are Hungry, Right!! \n Not to worry");
	
	printf("\n Pick any option \n 1)Pizza \n 2)Burger \n 3)Pasta \n 4)French Fries \n 5)Sandwithch \n");     //Menu for Items
	
	scanf("\n %d",&price);                 //Takes Input from the user from upper menu
	
		switch(price)             //prints message by the choice of user using Switch Case
		{
			case 1:
				printf("\n You Choose Pizza, You have to pay Rs.239");
				break;
				
		    case 2:
				printf("\n You Choose Burger, You have to pay Rs.129");
				break;
				
			case 3:
				printf("\n You Choose Pasta, You have to pay Rs.179");
				break;
				
			case 4:
				printf("\n You Choose French Fries, You have to pay Rs.99");
				break;
				
			case 5:
				printf("\n You Choose Sandwitch, You have to pay Rs.149");
				break;
			
			default:                                    //If choice doesn't match from upper menu , tells user to print valid choice
				printf("\n Invalid Input, Please Input Valid Choice");
					
		}
		
		printf("\n Thank You Very Much \n Please Visit Again:)");    //prints a good bye message with greetings
	
	
}
