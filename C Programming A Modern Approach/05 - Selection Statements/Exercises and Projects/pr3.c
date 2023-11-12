#include <stdio.h>

int main() {
    int share_amount;
    float price_per_share, value;
    float commission_original, commission_rival = 33.0f;

    printf("Enter share amount: ");
    scanf("%d", &share_amount);
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);
    value = share_amount * price_per_share;
    if (value < 2500.00f)
        commission_original = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission_original = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission_original = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission_original = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission_original = 155.00f + .0011f * value;
    else
        commission_original = 255.00f + .0009f * value;

    if (commission_original < 39.00f)
        commission_original = 39.00f;

    printf("Commission of the original broker: $%.2f\n", commission_original);

    commission_rival += share_amount * (share_amount < 2000 ? 0.03f : 0.02f);

    printf("Commission of the rival broker: $%.2f\n", commission_rival);

    return 0;
}