#include <stdio.h>
#include <ctype.h>

void wypiszTablice(int tab[], int n) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


void dodajElement(int tab[], int n) {
    char znak;

    if (n >= 100) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    printf("Podaj znak(char): ");
    scanf(" %c", &znak);

    if (isdigit(znak)) {
        tab[n] = znak;
        n++;
        
    } else {
                
        tab[n] =  (int)(znak);
        n++;
    }

    printf("Dodano element.\n");
}

void dodajLiczbe(int tab[], int *n, int rozmiar) {
    int liczba;

    if (*n >= rozmiar) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    printf("Podaj liczbe: ");
    if (scanf("%d", &liczba) != 1) {
        printf("Bledne dane!\n");
        return;
    }

    tab[*n] = liczba;
    (*n)++;

    printf("Dodano element.\n");
}

void usunElement(int tab[], int *n) {
    int liczba;
    int found = 0;

    if (*n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    printf("Podaj liczbe (ASCII lub cyfre): ");
    scanf("%d", &liczba);

    for (int i = 0; i < *n; i++) {
        if (tab[i] == liczba) {
            for (int j = i; j < *n - 1; j++) {
                tab[j] = tab[j + 1];
            }
            (*n)--;
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element usuniety.\n");
    else
        printf("Nie znaleziono elementu.\n");
}

int sumaCyfr(int tab[], int n) {
    if (n == 0)
        return -1;

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(tab[i]))
            suma += tab[i];
    }

    return suma;
}

void wypiszLinie(int tab[], int n) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    int r;
    printf("Podaj liczbe znakow w pierwszym wierszu: ");
    scanf("%d", &r);

    int index = 0;

    while (index < n) {
        for (int i = 0; i < r && index < n; i++) {
            printf("%d ", tab[index++]);
        }
        printf("\n");
        r++;
    }
}

void wypiszLinieRekuHelper(int tab[], int index, int r) {
    if (index < 0)
        return;

    wypiszLinieRekuHelper(tab, index - r, r + 1);

    for (int i = r - 1; i >= 0 && index - i >= 0; i--) {
        printf("%d ", tab[index - i]);
    }
    printf("\n");
}

void wypiszLinieReku(int tab[], int n) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    int r;
    printf("Podaj liczbe znakow w dolnym wierszu: ");
    scanf("%d", &r);

    wypiszLinieRekuHelper(tab, n - 1, r);
}

int tab[20];

int main() {
    
    int n = 0;
    char wybor;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("e - Wyjscie\n");
        printf("w - Wypisz tablice\n");
        printf("d - Dodaj element\n");
        printf("D - Dodaj liczbe\n");
        printf("u - Usun element\n");
        printf("s - Suma cyfr\n");
        printf("r - Wypisz liniami\n");
        printf("R - Wypisz rekurencyjnie\n");
        printf("Twoj wybor: ");

        scanf(" %c", &wybor);

        switch (wybor) {
            case 'e':
                printf("Koniec programu.\n");
                return 0;

            case 'w':
                wypiszTablice(tab, n);
                break;

            
            case 'd':
                dodajElement(tab, n);
                break;

            case 'D':
                dodajLiczbe(tab, &n, 20);
                break;

            case 'u':
                usunElement(tab, &n);
                break;

            case 's': {
                int s = sumaCyfr(tab, n);
                if (s == -1)
                    printf("Tablica jest pusta!\n");
                else
                    printf("Suma cyfr = %d\n", s);
                break;
            }

            case 'r':
                wypiszLinie(tab, n);
                break;

            case 'R':
                wypiszLinieReku(tab, n);
                break;

            default:
                printf("Bledny wybor!\n");
        }
    }
}
