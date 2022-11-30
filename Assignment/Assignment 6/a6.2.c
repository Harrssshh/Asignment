#include<stdio.h>
int main(){
    int marks[5];
    printf("enter marks of first subject :");
    scanf("%d",&marks[0]);
    printf("enter marks of secound subject :");
    scanf("%d",&marks[1]);
    printf("enter marks of third subject :");
    scanf("%d",&marks[2]);
    printf("enter marks of fourth subject :");
    scanf("%d",&marks[3]);
    printf("enter marks of fifth subject :");
    scanf("%d",&marks[4]);

    int sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    float percentage=sum/500*100;

    printf("total marks obtain by the student is : %d\n",sum);
    printf("percentage obtain by the student is %f\n",percentage);
    printf("average marks obtain by the student is : %d\n",sum/5);
    
    return 0;
}
