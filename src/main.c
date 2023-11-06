#include <stdio.h>
#define BREITE 0

int main()
{
    float breite = BREITE;
    float breitefix = 0;
    float leerzeichen = 0;

    printf("Bitte geben sie die Breite des Quadrats an:");
    scanf("%f", &breite);
    breitefix = breite;

    breite = breite * 2.7;
    while ( breite > 0)
    {
        printf("*");
        breite = breite - 1;
    }

    printf("\n");

    breite = breitefix - 2;
    while (breite > 0)
    {
        leerzeichen = breitefix * 2.7 - 2;
        printf("*");
        while (leerzeichen > 0)
        {
            printf(" ");
            leerzeichen = leerzeichen - 1;
        }
        printf("*\n");
        breite = breite - 1;
    }

    breite = breitefix * 2.7;
    while (breite > 0)
    {
        printf("*");
        breite = breite - 1;
    }
    
    return 0;
}
