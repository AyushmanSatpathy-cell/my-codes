#include <stdio.h>
int main(){
    double num1, num2;
    char op;
    char choice;

    do{
        printf("SIMPLE CALCULATOR\n");
        printf("Enter first number: ");
        scanf("%1f", &num1);

        printf("Enter operator(+, -, *, /): ")
        scanf("%1f", &num2);

        switch (op)
        {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)    
                printf("Result: %.2lf\n", num1 - num2);
            else
                printf("Error! cant divide by zero\n");
            break;
        default:
                printf("\n Press Y for another calculation: ");
                scanf("%c", &choice);       
        }
        while(choice =='y' || choice =='Y');
        printf("Exiting Calculator.\n");
        return 0;
    }
}