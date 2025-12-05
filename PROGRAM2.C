#include <stdio.h>

int main()
{
   
    float price1 = 50, price2 = 30, price3 = 100, price4 = 60, price5 = 40;
    int q1, q2, q3, q4, q5;

    float total = 0, discount = 0, gst = 0, final_bill = 0;

    printf("------ MINI BILLING SYSTEM ------\n\n");

    printf("Enter quantity of Item 1 (Price: ₹50): ");
    scanf("%d", &q1);

    printf("Enter quantity of Item 2 (Price: ₹30): ");
    scanf("%d", &q2);

    printf("Enter quantity of Item 3 (Price: ₹100): ");
    scanf("%d", &q3);

    printf("Enter quantity of Item 4 (Price: ₹60): ");
    scanf("%d", &q4);

    printf("Enter quantity of Item 5 (Price: ₹40): ");
    scanf("%d", &q5);

    total = (q1 * price1) + (q2 * price2) + (q3 * price3) + 
            (q4 * price4) + (q5 * price5);

   
    if (total > 1000)
    {
        discount = total * 0.10;   
    }
    else if (total > 500)
    {
        discount = total * 0.05;   
    }
    else
    {
        discount = 0;
    }

    float amount_after_discount = total - discount;

    gst = amount_after_discount * 0.05;

    final_bill = amount_after_discount + gst;
    printf("\n\n--------- BILL INVOICE ---------\n");
    printf("Item 1: %d x ₹50  = ₹%.2f\n", q1, q1 * price1);
    printf("Item 2: %d x ₹30  = ₹%.2f\n", q2, q2 * price2);
    printf("Item 3: %d x ₹100 = ₹%.2f\n", q3, q3 * price3);
    printf("Item 4: %d x ₹60  = ₹%.2f\n", q4, q4 * price4);
    printf("Item 5: %d x ₹40  = ₹%.2f\n", q5, q5 * price5);
    printf("--------------------------------\n");
    printf("Total Amount    : ₹%.2f\n", total);
    printf("Discount        : -₹%.2f\n", discount);
    printf("After Discount  : ₹%.2f\n", amount_after_discount);
    printf("GST (5%%)        : +₹%.2f\n", gst);
    printf("--------------------------------\n");
    printf("Final Bill       : ₹%.2f\n", final_bill);
    printf("--------------------------------\n");

    return 0;
}
