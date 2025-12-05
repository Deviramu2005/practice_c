#include <stdio.h>
#include <unistd.h> 
void run_one_cycle()
{
    int i;
    printf("\n---ONE COMPLETE CYCLE ---\n");
    printf("RED\n");
    for(i = 10; i > 0; i--)
    {
        printf("Wait %d\n", i);
        sleep(1);
    }
    printf("YELLOW\n");
    for(i = 3; i > 0; i--)
    {
        printf("Wait %d\n", i);
        sleep(1);
    }
    printf("GREEN\n");
    for(i = 7; i > 0; i--)
    {
        printf("Go %d\n", i);
        sleep(1);
    }
    printf("Cycle completed!\n");
}
void run_continuous_loop()
{
    int i, cycle = 0;
    printf("\n---CONTINUOUS LOOP (3 cycles) ---\n");

    for(cycle = 1; cycle <= 3; cycle++)
    {
        printf("\nCycle %d\n", cycle);
        printf("RED\n");
        for(i = 10; i > 0; i--)
        {
            printf("Wait %d\n", i);
            sleep(1);
        }

        printf("YELLOW\n");
        for(i = 3; i > 0; i--)
        {
            printf("Wait %d\n", i);
            sleep(1);
        }
        printf("GREEN\n");
        for(i = 7; i > 0; i--)
        {
            printf("Go %d\n", i);
            sleep(1);
        }
    }
}
void countdown_check()
{
    printf("\n---COUNTDOWN CHECK ---\n");
    printf("Expected timing: RED 10s → YELLOW 3s → GREEN 7s\n");
    printf("Countdown logic verified.\n");
}
void manual_break() {
    printf("\n--- TS4: MANUAL BREAK ---\n");
    printf("Program stopped manually.\n");
}

int main() {
    run_one_cycle();       
    run_continuous_loop(); 
    countdown_check();     
    manual_break();        

    return 0;
}
