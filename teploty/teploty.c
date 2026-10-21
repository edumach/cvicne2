/*
vstup.txt
    │
    │ <
    v
  stdin ──> scanf() ──> program v C ──> printf() ──> stdout
                                                     │
                                                     │ >
                                                     v
                                                vystup.txt
*/

#include <stdio.h>

int main(void)
{
    int teplota;
    int min, max;
    int pocet = 1;

    /* Načtení první hodnoty */
    if (scanf("%d", &teplota) != 1)
    {
        printf("Soubor neobsahuje zadna cisla.\n");
        return 1;
    }

    min = teplota;
    max = teplota;

    /* Načítání dalších hodnot */
    while (scanf("%d", &teplota) == 1)
    {

        pocet++;

        if (teplota < min)
            min = teplota;

        if (teplota > max)
            max = teplota;
    }

    printf("Pocet hodnot:     %3d\n", pocet);
    printf("Nejnizsi teplota: %3d\n", min);
    printf("Nejvyssi teplota: %3d\n", max);

    return 0;
}
