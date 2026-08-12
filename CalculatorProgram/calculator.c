#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    // Menu sirf ek baar display hoga
    printf("====================================\n");
    printf("        SIMPLE C CALCULATOR\n");
    printf("====================================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("====================================\n");

    while (1)
    {
    	printf("----------------------------------\n");
        printf("\nPlease enter your choice (1 to 5): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 + num2;

                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("\nEnter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 - num2;

                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("\nEnter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 * num2;

                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("\nEnter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                if (num2 == 0)
                {
                    printf("Error: Division by zero is not allowed!\n");
                }
                else
                {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                break;

            case 5:
                printf("\nThank you for using the calculator!\n");
                printf("Program exited successfully.\n");
                printf("===================================\n");
                return 0;

            default:
                printf("\nInvalid case choice!\n");
                printf("Please enter a choice from 1 to 5.\n");
        }
    }

    return 0;
}
