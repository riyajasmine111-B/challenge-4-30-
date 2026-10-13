
#include <stdio.h>

int main()
{
    float expense;
    float smallTotal = 0, mediumTotal = 0, largeTotal = 0;
    float totalExpense = 0, average;
    int smallCount = 0, mediumCount = 0, largeCount = 0;
    int validCount = 0;

    printf("===== LOOPLAB: DAILY EXPENSE ANALYSER =====\n");
    printf("Enter 0 to stop entering expenses.\n");

    do
    {
        printf("\nEnter expense amount: ");
        scanf("%f", &expense);

        if (expense == 0)
        {
            printf("Input stopped.\n");
        }
        else if (expense < 0)
        {
            printf("Invalid expense! Enter a positive amount.\n");
        }
        else
        {
            validCount++;
            totalExpense += expense;

            if (expense < 100)
            {
                smallCount++;
                smallTotal += expense;
                printf("Category: Small\n");
            }
            else if (expense < 500)
            {
                mediumCount++;
                mediumTotal += expense;
                printf("Category: Medium\n");
            }
            else
            {
                largeCount++;
                largeTotal += expense;
                printf("Category: Large\n");
            }
        }

    } while (expense != 0);

    printf("\n========== EXPENSE SUMMARY ==========\n");
    printf("Number of valid expenses: %d\n", validCount);
    printf("Total of valid expenses: Rs. %.2f\n", totalExpense);

    printf("\n--- Small Expenses ---\n");
    printf("Count: %d\n", smallCount);
    printf("Total: Rs. %.2f\n", smallTotal);

    printf("\n--- Medium Expenses ---\n");
    printf("Count: %d\n", mediumCount);
    printf("Total: Rs. %.2f\n", mediumTotal);

    printf("\n--- Large Expenses ---\n");
    printf("Count: %d\n", largeCount);
    printf("Total: Rs. %.2f\n", largeTotal);

    if (validCount > 0)
    {
        average = totalExpense / validCount;
        printf("\nAverage valid expense: Rs. %.2f\n", average);
    }
    else
    {
        printf("\nNo valid expenses were entered.\n");
        printf("Average cannot be calculated.\n");
    }

    printf("=====================================\n");

    return 0;
}
