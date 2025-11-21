#include <stdio.h>
#include <math.h>

void clear_stdin(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}


int main()
{
    double num1, num2, result;
    char op;
    int n;

    printf("------------------------\n");
    printf("\\Simple Calculator\\\n");
    printf("------------------------\n\n");
    printf("For exit type: 0 / 0\n\n\n");

    
while (1)
{
    
    
    printf("\n\nEnter command like(e.g., 3 + 4):");
    n = scanf("%lf %c %lf", &num1, &op, &num2);

    if (n != 3) {
        printf("Invalid input. Please enter: <number> <op> <number>\n");
        clear_stdin(); // remove the bad input picked it from chatgpt
        continue;
    }

    if (num1 == 0 && num2 == 0)
    {
        printf("Exiting the calculator.\nThanks for using it!\nCreator: Malvare\n");
        break;
    }
    
    switch (op)
    {
        case '+':
        result = num1 + num2;
        printf("Result: %.2f\n\n", result);
        break;
        
        case '-':
        result = num1 - num2;
        printf("Result: %.2f\n\n", result);
        break;
        
        case '_':
        printf("INVALID OPERATOR!\n\n");
        break;
        
        case '*':
        case 'x':
        case 'X':
        result = num1 * num2;
        printf("Result: %.2f\n\n", result);
        break;
        
        case '/':
        if (num2 == 0)
        {
            printf("ERROR: invalid argument!!\n\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result: %.2f\n\n", result);
            break;
        }
        
        case '%':
        if (num2 == 0)
        {
            printf("ERROR: invalid argument!!\n\n");
        }
        else
        {
            result = (int)num1 % (int)num2;
            printf("Result: %.2f\n\n", result);
            break;
        }

        case '^':
        result = pow(num1, num2);
        printf("Result: %.2f\n\n", result);
        break;
        
        default:
        printf("invalid operator! use +,-,x,/,^  only\n\n");
    }
}
   

    return 0;
}