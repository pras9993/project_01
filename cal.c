#include<stdio.h>
int main()
{ 
int n;
int no1,no2,result;
printf("Enter value of 2 numbers");
scanf("%d %d"no1,no2);

	
	printf("Calculator");
	printf("1.addtion \n2.subtraction");
	printf("Enter your choice");
	scanf("%d",n);
switch(n)
{ 
		case 1://Addition
			result=no1+no2;
			printf("result is %d",result);
			break;
	case 2://Subtraction
			result=no1-no2;
			printf("result is %d",result);
	break;
	default:
				
				printf("invalid choice");
				break;
				
}
return 0;

} 
