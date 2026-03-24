#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Variablen für die Berechnungen
    // = Operator (Zuweisungsoperator)
    int a = 10;
    int b = 7;
    int result = 0;

    // + Operator (Addition)
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

    // - Operator (Subtraktion)
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);

    // * Operator (Multiplikation)
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    // / Operator (Division)
    // Bei Division von Ganzzahlen werden Nachkommastellen abgeschnitten
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);

    // % Operator (Modulo: Rest einer Division)
    // Wenn man ein Escape-Zeichen (z.B. % oder \ ausgeben will,
    // muss man es zweimal schreiben, z.B. %% um % einmal auszugeben)
    result = a % b;
    printf("%d %% %d = %d\n", a, b, result);

    // ++ Operator (inkrement)
    a = 5;
    int temp_a = a;
    // ++ZAHL oder Zahl++
    ++a;
    // hier wird eine zusätzliche Variable temp benutzt,
    // da inkrement (++) die variable selbst verändert
    printf("++%d = %d = %d++\n", temp_a, a, temp_a);

    // a wieder zurücksetzen
    a = temp_a;

    // -- Operator (dekrement)
    a = 5;
    // --ZAHL oder Zahl--
    a--;
    // hier wird eine zusätzliche Variable temp benutzt,
    // da dekrement (--) die variable selbst verändert
    printf("--%d = %d = %d--\n", temp_a, a, temp_a);

    // a wieder zurücksetzen
    a = temp_a;

    // Erweiterte Zuweisungsoperatoren
    // +=   -=   *=   /=   %=
    // Beispiel: (5 += 5) = 10
    a += b;
    printf("%d += %d =  %d\n", temp_a, b, a);

    // Übersicht arithmetischer Operatoren:
    // +   -   *   /   %
    // ++  --µ
    // +=  -=  *=  /=  %=

    return 0;
}