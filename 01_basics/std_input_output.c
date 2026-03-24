#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Ausgabe auf der Standardausgabe
    printf("Hallo, ich bin Ahmad Kalaf\n");
    // Oder mit Variablen -> siehe ./variables.c
    char user_name[] = "Ahmad kalaf";
    printf("Der Benutzername lautet %s\n", user_name);

    // Input: Eingabe des Benutzers lesen mit fgets() und scanf()

    return 0;
}