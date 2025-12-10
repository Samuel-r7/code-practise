#include <stdio.h>

int main()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter the item's name: ");
    scanf("%49s", &item);

    printf("Enter the price of item: ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("The total Amount is %c%.2f ", currency, total);
    return 0;
}