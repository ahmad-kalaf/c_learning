#include <stdio.h>

int main()
{
    // Ausgabe auf der Standardausgabe
    printf("Hallo, ich bin Ahmad Kalaf\n");
    // Oder mit Variablen -> siehe ./variables.c
    char my_name[] = "Ahmad kalaf";
    printf("Der Benutzername lautet %s\n", my_name);

    /*
    Input: Eingabe des Benutzers lesen mit fgets() und scanf()
    Variablen sollten mit einem Wert initialisiert werden, da sie
    sonst einen Zufälligen Wert aus dem Speicher enthalten könnten
    */
    char user_name[50] = "";
    int user_age = 0;
    float user_height_meters = 0.0f;
    char user_gender = '\0';

    /*
    Syntax von scanf:
    scanf(Formatzeichen z.B. %d für integer, Adresse der Zielvariable z.B. &user_age)
    Achtung: bei int, float, char meist mit & und bei char[] als String ohne &
    Achtung: %s liest nur bis zum ersten Leerzeichen
    Bessere alternative ist fgets
    Syntax von fgets:
    fgets(Zielvariable, Eingabelänge, Eingabequelle)
    mit sizeof(var) erhält man die Länge einer Variable var
    */
    printf("Gib dein Vor- und Nachname ein: ");
    fgets(user_name, sizeof(user_name), stdin);
    /*
    Nach Eingabe von Strings wird auch ein newline (\n) eingegeben
    um das zu entfernen gibt es verschiedene Methoden z.B. mit sscanf
    sscanf liest aus einem String anstatt wie bei scanf aus stdin
    "%[^\n]" bedeutet alles bis zum (exklusiv) newline
    */
    sscanf(user_name, "%49[^\n]", user_name);

    printf("Gib dein Alter in Jahren ein: ");
    scanf("%d", &user_age);

    printf("Gib deine Körpergröße in Meter ein: ");
    scanf("%f", &user_height_meters);

    printf("Gib dein Geschlecht(M, W oder D) ein: ");
    scanf(" %c", &user_gender);

    printf("User name: %s\n", user_name);
    printf("User Age: %d\n", user_age);
    printf("User height in meters: %.2f\n", user_height_meters);
    printf("User gender: %c\n", user_gender);

    /*
    Das Mischen von scanf und fgets kann zu Problemen führen, da scanf
    den newline (\n) nicht entfernt, was dazu führt, dass fgets sofort
    mit einem leeren String endet. Daher ist es besser, entweder nur scanf
    oder nur fgets zu verwenden, um Eingaben zu lesen.
    */

    /*
    ####### Bessere Methode für Inputs #######
    */
    // Mit fgets + sscanf und buffer arbeiten
    char buffer[200];
    /* Um das Problem mit newline (\n) im stdin zu beheben (siehe oben),
    lesen wir hier das newline einmal aus
    */
    fgets(buffer, sizeof(buffer), stdin);

    /*
    Alles zurücksetzen
    In c signalisiert \0 das Ende eines Strings. Wenn wir
    das erste Element im Char-Array (String) user_name, also
    user_name[0] gleich '\0' setzen, dann wird der Rest ignoriert
    und der String als leer angezeigt, auch wenn die restlichen
    Elemente noch im Speicher sind.
    */
    user_name[0] = '\0';
    user_age = 0;
    user_height_meters = 0.0f;
    user_gender = '\0';

    printf("####### Bessere Alternative mit fgets + sscanf + buffer #######\n");

    // String einlesen bis zum newline
    printf("Gib dein Vor- und Nachname ein: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%49[^\n]", user_name);

    // Ganzzahl einlesen
    printf("Gib dein Alter in Jahren ein: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &user_age);

    printf("Gib deine Körpergröße in Meter ein: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &user_height_meters);

    printf("Gib dein Geschlecht(M, W oder D) ein: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &user_gender);

    printf("User name: %s\n", user_name);
    printf("User Age: %d\n", user_age);
    printf("User height in meters: %.2f\n", user_height_meters);
    printf("User gender: %c\n", user_gender);

    return 0;
}