#include <stdio.h>
#include <string.h>
void waterStatus(float level, char *status)
{

    if (level < 0 || level > 100)
    {
        strcpy(status, "Error");
        return;
    }

    if (level < 10)
        strcpy(status, "LOW + ALERT + Fill");
    else if (level < 30)
        strcpy(status, "LOW + Fill");
    else if (level <= 70)
        strcpy(status, "MEDIUM");
    else
        strcpy(status, "HIGH");
}

int main()
{
    float level;
    char status[30];

    printf("Enter tank level (0–100): ");
    scanf("%f", &level);

    waterStatus(level, status);

    printf("\n--- Water Level Status ---\n");
    printf("Tank Level : %.2f%%\n", level);
    printf("Status     : %s\n", status);

    return 0;
}
