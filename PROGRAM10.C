#include <stdio.h>
float calculateSalary(int hrs[7])
{
    float total = 0;
    for (int i = 0; i < 7; i++) {
        if (hrs[i] < 0)
            return -1;

        int normal = (hrs[i] <= 8) ? hrs[i] : 8;
        int ot = (hrs[i] > 8) ? (hrs[i] - 8) : 0;

        total += (normal * 100) + (ot * 100);  
    }

    return total;
}

int main()
{

    int hrs[7];

    printf("Enter working hours for 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &hrs[i]);
    }

    float salary = calculateSalary(hrs);

    if (salary < 0) {
        printf("\nError: Invalid input (negative hours not allowed)\n");
    } else {
        printf("\nTotal Salary: %.2f\n", salary);
    }

    return 0;
}
