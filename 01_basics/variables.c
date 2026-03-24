#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Variablen
    int current_year = 2026;
    int birth_year = 2001;
    int birth_month = 01;
    int birth_day = 05;
    // Vereinfachte Berechnung
    int age = current_year - birth_year;

    //----------------------------VARIABLEN-----------------------------------------
    // Ausgabe von Variablen
    printf("Ich bin am %d.%d.%d geboren und bin %d Jahre alt.\n", birth_day, birth_month, birth_year, age);
    // Ausgabe von Zahlen mit einer bestimmten Zeichenanzahl
    // Hier: Geburtstag und Geburtsmonat jeweils insgesamt 2 Zeichen und Geburtsjahr 4 Zeichen
    printf("Ich bin am %02d.%02d.%04d geboren und bin %d Jahre alt.\n", birth_day, birth_month, birth_year, age);
    // Zeichen linksbündig ausgeben
    printf("Ich bin am %-5d.%-5d.%-5d geboren und bin %d Jahre alt.\n", birth_day, birth_month, birth_year, age);
    printf("|%-10c|\n", 'A');

    // boolean
    bool is_adult = age >= 18;
    // 1 -> true
    // 0 -> false
    printf("is_adult = %d\n", is_adult);

    // Text in Variable speichern -> Strings bzw. char-Array
    char user_full_name[] = "Ahmad Kalaf";
    printf("Der Benutzer heißt %s.\n", user_full_name);

    // Kommazahlen 4 byte
    float body_height = 192.0;
    float pi = 3.141592653589793;
    // Kommazahlen 8 byte
    double pi_more_precise = 3.141592653589793;

    printf("%f\n", body_height);
    printf("%f\n", pi);
    // Für floats kann man auch %lf benutzen -> long floating point
    // Für printf gibt es keinen Unterschied zwischen %f und %lf,
    // weil printf float automatisch zu double (lf) umwandelt
    // Bei scanf (user eingabe) gibt es einen Unterschied:
    // scanf(%f) -> float
    // scanf(%lf) -> double
    printf("%lf\n", pi_more_precise);

    // Präzision bei Kommazahlen
    // Wenn nichts angegeben, werden 6 Nachkommastellen ausgegeben
    printf("Präzision angeben:\n");
    printf("2 Nachkommastellen: %.2f\n", body_height);
    printf("10 Nachkommastellen: %.10f\n", pi);
    printf("Mindestens 20 Zeichen (insgesamt) UND 15 Nachkommastellen: %020.15f\n", pi_more_precise);

    // Flags
    // Minimale Breite, Präzision, Anzahl Nachkommastellen sind kombinierbar
    printf("Positiver Wert: %+f\n", 20.0);
    printf("Negativer Wert: %+f\n", -20.0);
    printf("Negativer Wert mit zwei Nachkommastellen: %+.2f\n", -20.0);
    printf("Implizit aufgerundet (zwei Nachkommastellen): %+.2f\n", 1.666);
    printf("Implizit abgerundet (zwei Nachkommastellen): %+.2f\n", 1.664);
}