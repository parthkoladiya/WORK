#include <stdio.h>
#include <conio.h>

struct Interest {
    int principal;
    float rate;
    int time;
};

void main()
{
    struct Interest interest;
   float simpleInterest;
   clrscr();
    printf("Enter principal amount: ");
    scanf("%f", &interest.principal);

    printf("Enter interest rate: ");
    scanf("%f", &interest.rate);

    printf("Enter time (in years): ");
    scanf("%d", &interest.time);

     simpleInterest = (interest.principal * interest.rate * interest.time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);

   getch();
}
