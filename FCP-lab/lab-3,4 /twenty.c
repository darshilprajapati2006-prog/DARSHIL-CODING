/*
43.⁠ ⁠WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.

If sales <= 500, commission is 5%
If sales > 500 but <= 2000, commission is Rs. 35 plus 10% above Rs. 500
If sales > 2000 but <= 5000, commission is Rs. 185 plus 12% above Rs. 2000
If sales > 5000, commission is 12.5%
*/

#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter sales amount: ");
    scanf("%f", &sales);

    if(sales <= 500) {
        commission = sales * 0.05;
    }
    else if(sales <= 2000) {
        commission = 35 + (sales - 500) * 0.10;
    }
    else if(sales <= 5000) {
        commission = 185 + (sales - 2000) * 0.12;
    }
    else {
        commission = sales * 0.125;
    }

    printf("Commission = %.2f\n", commission);

    return 0;
}