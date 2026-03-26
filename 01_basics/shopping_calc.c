#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[100] = "";
    char cart_item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    double total = 0;

    printf("Willkommen zum SHOPPING_CALC\n");
    // Produktname
    printf("Gib den Produktnamen ein:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %49[^ \n]", cart_item);

    // Produktpreis
    printf("Gib den Produktpreis in Euro ein:\n");
    fgets(buffer, sizeof(buffer), stdin);
    /* strtof wandelt einen String in float um.*/
    price = strtof(buffer, NULL);

    // Anzahl
    printf("Gib die Anzhl der Produkte ein:\n");
    fgets(buffer, sizeof(buffer), stdin);
    /* strtol wandelt einen String in long/int um.*/
    quantity = strtol(buffer, NULL, 10);

    // Gesamtpreis berechnen
    total = quantity * price;

    printf("Du hast %d x %s gekauft.\n", quantity, cart_item);
    printf("Der Gesamtpreis ist %.2f Euro", total);

    return 0;
}