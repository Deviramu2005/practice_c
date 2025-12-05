#include <stdio.h>
#include <string.h>
int main()
{
    int days;
    float fine = 0;
    char remark[30];
    printf("Enter days overdue: ");
    scanf("%d", &days);
    if (days < 0) 
    {
        strcpy(remark, "Error");
        fine = -1;
    }
    else if (days == 0)
    {
        strcpy(remark, "No fine");
        fine = 0;
    }
    else if (days >= 1 && days <= 5)
    {
        strcpy(remark, "2/day");
        fine = days * 2;
    }
    else if (days <= 10) 
    {
        strcpy(remark, "5/day");
        fine = days * 5;
    }
    else if (days <= 30) 
    {
        strcpy(remark, "10/day");
        fine = days * 10;
    }
    else 
    { 
        strcpy(remark, "Membership Cancelled");
        fine = -1;
    }
    printf("\n--- Library Fine Details ---\n");
    printf("Days Overdue : %d\n", days);
    printf("Fine Amount  : %.2f\n", fine);
    printf("Remark       : %s\n", remark);

    return 0;
}
