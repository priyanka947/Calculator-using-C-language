#include<stdio.h>

int main(){
    char operator;
    double first, second;
    printf("Enter the operator(+, -, *, /) :");
    scanf(" %c", &operator);
    printf("Enter the two numbers one by one : ");
    scanf("%lf %lf", &first, &second);

    switch(operator){
       case '+':
           printf("%.2lf + %.2lf = %.2lf",first,second,(first+second));
           break;
       case '-':
           printf("%.2lf - %.2lf = %.2lf",first,second,(first-second));
           break;
       case '*':
           printf("%.2lf * %.2lf = %.2lf",first,second,(first*second));
           break;
       case '/':
           if(second !=0)
           printf("%.2lf / %.2lf = %.2lf",first,second,(first/second));
           else
            printf("Divide by Zero situation.");
       default:
        printf("%c is not a valid Operator",operator);

    }
    return 0;
}
