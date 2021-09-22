#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[30];
    float height,weight;
    printf("********************************************************************\n");
    printf("\n\t\tBMI CALCULATOR\n");
    printf("\nWhat's your name-");
    gets(s);
    printf("\n%s,Please enter the your height in cm ",s);
    scanf("%f",&height);
    if(height<0){
            printf("PLease Enter valid ");
            exit(1);
    }
    printf("\n%s,Please enter the your weight in Kg ",s);
    scanf("%f",&weight);
    if(weight<0){
            printf("PLease Enter valid ");
            exit(1);
    }
    float meter=height/100;
    float kg=weight;
    float BMI=kg/(meter*meter);
    printf("\n\tYour BMI Points %0.1f ",BMI);
    printf("\n\n");
    if(BMI<18.5)
        printf("\t\tBelow Normal\n");
    else if(BMI>=18.5&&BMI<25)
        printf("\t\tNormal\n");
    else if(BMI>=25&&BMI<30)
        printf("\t\tObesity\n");
    else if(BMI>=30&&BMI<35)
        printf("\t\tClass 1 Obesity\n");
    else if(BMI>=35&&BMI<45)
        printf("\t\tClass 2 Obesity\n");
    else
        printf("\t\tClass 3 Obesity\n");
    printf("\nNOTE - Exercise is essential for good health\n");
    printf("\n\t Thank you for your valuable time\n");
    printf("\n\n********************************************************************\n");
}
