#include <stdio.h>
#include <conio.h>

struct ElectricityBill 
{
    int units;
    float rate;
};

void main()
 {
    struct ElectricityBill bill;
    float totalAmount;
    clrscr();
    printf("Enter number of units consumed: ");
    scanf("%d", &bill.units);

    if (bill.units <= 100) {
	bill.rate = 1.0;
    } else if (bill.units <= 200) {
	bill.rate = 2.5;
    } else if (bill.units <= 300) {
	bill.rate = 3.5;
    } else {
	bill.rate = 5.0;
    }

     totalAmount = bill.units * bill.rate;
    printf("Electricity Bill: %.2f\n", totalAmount);

    getch();
}
