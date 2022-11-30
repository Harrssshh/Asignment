#include<stdio.h>
int main()
   {
   	int sub1,sub2,sub3,sub4,sub5;
   	
   	printf("enter marks of first subject :");
   	scanf("%d",&sub1);
   	
   	printf("enter marks of second subject : ");
   	scanf("%d",&sub2);
   	
    printf("enter marks of third subject : ");
   	scanf("%d",&sub3);
   	
   	printf("enter marks of fourth subject : ");
   	scanf("%d",&sub4);
   	
    printf("enter marks of fifth subject : ");
   	scanf("%d",&sub5);
   	
   	
    int sum=sub1+sub2+sub3+sub4+sub5;
    
    float per=sum/500*100;
   	 
   
    if(per<33){
  	printf("failed");
  }
  	else if (per>=33 && per<=100){
	 
	 printf("passed");
  }
  else {
  	printf("enter marks under 100");
  }
  return 0;
}

