#include <stdio.h>
int main(void)
{
    float gross;
    float tot_hrs;
    int rate_pr_hr = 10;
    int choice = 0;

    printf("Enter total hours\n");
    scanf("%f", &tot_hrs);
    choice = tot_hrs > 40;
    switch (choice) {
    case 1:
        gross = (rate_pr_hr * 40) + (rate_pr_hr * 1.5 * (tot_hrs - 40));
        break;
    case 0:
        gross = rate_pr_hr * tot_hrs;
        break;
    default:
        printf("Error default");
    }
    printf("pay is: %0.2f\n", gross);
}
