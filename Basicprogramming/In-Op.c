#include <stdio.h>

int main()
{
	int num;
	char str[15];                   // Declaration of variable
	scanf("%d %s",&num,&str);        // Reading Input from user
	if(num>=0 && num<=10){
		printf("%d \n%s",num*2,str);   //Writing Output
	}
	else
	{
		printf("Invalid Input of number");      // Writing output for invaliid input number
	}
 
}
