#include<stdio.h>
main()
{
    int unit;
    float amount,surcharge,sum;
    printf("Enter electricity units: ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amount = unit * 0.50;
    }
    else if(unit<=150)
    {
        amount = 25 + ((unit-100) * 0.75);
    }
    else if(unit<=250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else 
    {
        amount = 220 + ((unit-250) * 1.50);
 }
     surcharge= amount * 20/100;
     sum= amount + surcharge;

    printf("Electricity Bill = Rs. %.2f",sum);
}