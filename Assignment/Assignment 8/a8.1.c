#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter first number : ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	printf("enter third number : ");
	scanf("%d",&c);

	
	if (a>b && a>c){
	printf("%d is greator among the number ",a);
}
    else if(b>a && b>c) {
    	printf("%d is  greatest among the number ",b);
    	
	}
	else if(c>a && c>b){
		printf("%d is greator among the number ",c);
	}
	else {
	printf("number is not greatest among the number");
		}
	return 0;
	
}

