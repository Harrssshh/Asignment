#include<stdio.h>
int main(
){
    char a;
    printf("For cm enter c : m for mm :  i for inch :");
    scanf("%c",&a);
    int b;
    printf("Enter the distance between two cities in km :");
    scanf("%d",&b);
    if(a=='c'){
        printf("The distance between the two cities in cm is : %d ",b*100);
    }
    else if(a=='m'){
        printf("The distance between the two cities in m is : %d ",b*1000000);
    }
    else if(a=='i'){
        printf("The distance between the two cities in inches is : %d ",b*39370);
    }
    else{
        printf("enter a valid character ");
    }
    return 0 ;
}
