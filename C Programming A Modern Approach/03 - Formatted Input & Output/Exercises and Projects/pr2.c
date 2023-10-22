#include <stdio.h>

int main()
{
    int item_number, month_purchase, day_purchase, year_purchase;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month_purchase, &day_purchase, &year_purchase);
    printf("Item\t\tUnits\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n", item_number, unit_price, month_purchase, day_purchase, year_purchase);
    return 0;
}