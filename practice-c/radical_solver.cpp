//ax^2+bx+c Radical Equation Calculator
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x1,x2,delta;
	print("Welcome to ax^2+bx+c=0 solver");
	printf("Enter the value a:\n");
	scanf("%d",&a);
	printf("Enter the value b:\n");
	scanf("%d",&b);
	printf("Enter the value c:\n");
	scanf("%d",&c);
	delta=pow(b,2)-4*a*c;
	x1= (-b+sqrt(delta))/2*a;
	x2= (-b-sqrt(delta))/2*a;
	printf("First root:%.2f\n",x1);
	printf("Second root:%.2f",x2);
	return 0;
}
