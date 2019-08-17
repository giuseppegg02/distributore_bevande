#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipi di funzioni.
void decrementa_disponibilita_1(int disponibilita);

// Creazione delle STRUCT.
struct bibite {
    char nome[100];
    int codice;
    float prezzo;
    int disponibilita;
};

struct data {
    int mese;
    int giorno;
};

int main()
{
    // Creazione del distributore.
    typedef struct bibite Bibite;
    Bibite array_bibite[10] = {{"Coca-Cola", 0, 0.60, 10},
                              {"Sprite", 1, 0.50, 10},
                              {"RedBull", 2, 1.00, 10},
                              {"Burn", 3, 1.00, 10},
                              {"Fanta", 4, 0.20, 10},
                              {"PowerRade", 5, 1.00, 10},
                              {"Energy", 6, 0.50, 10},
                              {"San Pellegrino", 7, 1.00, 10},
                              {"Pepsi", 8, 0.50, 10},
                              {"Gatorade", 9, 1.00, 10}};

    // Scelta di una bibita da parte dell'utente.
    printf("Sono presenti le seguenti bibite:\n");
    int i, bibita_scelta, disponibilita;
    float monete_inserite, resto;
    for (i = 0; i < 10; i++) {
        printf("%d - %s\n", array_bibite[i].codice, array_bibite[i].nome);
    }
    printf("(10)Termina la macchina.");

    while (1) {
        printf("\n");
        printf("Scegli una bibita (INSERISCI IL CODICE CORRISPONDENTE):\n");
        scanf("%d", &bibita_scelta);

        if (bibita_scelta == 10) {
            break;
        }

        printf("Hai scelto di prelevare %s", array_bibite[bibita_scelta].nome);
        printf("\n");
        printf("Inserisci delle monete (0.10, 0.20, 0.50, 1.00):\n");
        scanf("%f", &monete_inserite);
        printf("\n");

        // Controllo se è possibile ricevere la bibita.
        if (monete_inserite == 0.10 || monete_inserite == 0.20 || monete_inserite == 0.50 || monete_inserite == 1.00) {
            if (monete_inserite < array_bibite[bibita_scelta].prezzo) {
                printf("NON HAI ABBASTANZA CREDITO PER AVERE LA BIBITA SCELTA.\n");
            } else if (monete_inserite == array_bibite[bibita_scelta]. prezzo) {
                printf("STAI PER AVERE LA BIBITA SCELTA.\nGRAZIE.\n");
                printf("(Nessun resto da dare).");
            } else if (monete_inserite > array_bibite[bibita_scelta].prezzo) {
                printf("STAI PER RICEVERE LA BIBITA SCELTA.\nGRAZIE.\n");
                resto = monete_inserite - array_bibite[bibita_scelta].prezzo;
                printf("(Resto da ricevere: %f).", resto);
            }
        } else {
            printf("CI DISPIACE, MA LA MACCHINA ACCETTA SOLO MONETE DA 0.10, 0.20, 0.50, 1.00.");
        }
    }

    return 0;
}

void decrementa_disponibilita_1 (int disponibilita) {
    if (disponibilita == 10) {
        return 1;
    } else {
    }
}
