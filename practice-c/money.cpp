/*Total Money Calculator*/
//quarter=25cents penny=1cent nickel=5cents dime=10cents
#include<stdio.h>

int main(void)
{
	int quarter,penny,nickel,dime;
	int totalcent,dolar,change;
	
	printf("How many quarters do you have ?>");
	scanf("%d",&quarter);
	
	printf("How many dimes do you have ?>");
	scanf("%d",&dime);
	
	printf("How many nickels do you have ?>");
	scanf("%d",&nickel);
	
	printf("How many pennies do you have ?>");
	scanf("%d",&penny);
	
	totalcent=(25*quarter)+(10*dime)+(5*nickel)+(penny);
	
	dolar=totalcent/100;
	change=totalcent%100;
	
	printf("Total money: %d dolars %d cents",dolar,change);
	
	return 0;
	
}
