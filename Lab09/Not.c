#include <stdio.h>
#include <ctype.h>   // isdigit

// zmienna globalna
int n = 0;

// deklaracje funkcji
void wypiszTablice(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%c ", tab[i]);
    }
    printf("\n");
}

void dodajElement(char tab[]) {
    char znak;

    if (n >= 100) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    printf("Podaj cyfre: ");
    scanf(" %c", &znak);

    if (!isdigit(znak)) {
        printf("To nie jest cyfra!\n");
        return;
    }

    tab[n] = znak;
    n++;

    printf("Dodano element.\n");
}


void usunElement(char tab[]) {
    int index;

    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    printf("Podaj indeks (0-%d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Bledny indeks!\n");
        return;
    }

    for (int i = index; i < n - 1; i++) {
        tab[i] = tab[i + 1];
    }

    n--;
    printf("Element usuniety.\n");
}


int sumaCyfr(char tab[]) {
    if (n == 0)
        return -1;

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i] - '0';
    }

    return suma;
}


void wypiszDrzewo(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    int index = 0;
    int poziom = 1;

    while (index < n) {
        int ile = 1 << (poziom - 1);

        for (int s = 0; s < (1 << (5 - poziom)); s++)
            printf(" ");

        for (int i = 0; i < ile && index < n; i++) {
            printf("%c ", tab[index]);
            index++;
        }

        printf("\n");
        poziom++;
    }
}

int main() {
    char tab[100];   // tablica NIE jest globalna
    int wybor;

    while (1) {   // pętla nieskończona
        printf("\n--- MENU ---\n");
        printf("0 - Wyjscie\n");
        printf("1 - Wypisz tablice\n");
        printf("2 - Dodaj cyfre\n");
        printf("3 - Usun element\n");
        printf("4 - Suma cyfr\n");
        printf("5 - Wypisz jako drzewo\n");
        printf("Twoj wybor: ");

        scanf("%d", &wybor);

        switch (wybor) {
            case 0:
                printf("Koniec programu.\n");
                return 0;

            case 1:
                wypiszTablice(tab);
                break;

            case 2:
                dodajElement(tab);
                break;

            case 3:
                usunElement(tab);
                break;

            case 4: {
                int s = sumaCyfr(tab);
                if (s == -1)
                    printf("Tablica jest pusta!\n");
                else
                    printf("Suma = %d\n", s);
                break;
            }

            case 5:
                wypiszDrzewo(tab);
                break;

            default:
                printf("Bledny wybor!\n");
        }
    }
}

/*

// deklaracja wskaźnika
int *p;            // p przechowuje adres zmiennej typu int

// przypisanie adresu
int a = 5;
p = &a;            // p wskazuje na a

// dereferencja
*p = 10;           // a = 10
printf("%d", *p);  // wypisze 10

// wskaźnik a tablica
int tab[5] = {1,2,3,4,5};
int *w = tab;      // w == &tab[0]

// dostęp do elementów tablicy
tab[2] == *(tab + 2)
w[2]   == *(w + 2)

// arytmetyka wskaźników
w++;               // przejście do następnego elementu
*(w + i)           // i-ty element

// przekazywanie przez wskaźnik (zmiana oryginału)
void fun(int *x) {
    *x = 100;
}

// użycie
int b = 5;
fun(&b);           // b == 100

// wskaźnik do wskaźnika
int **pp;
pp = &p;

// const i wskaźniki
const int *p1;     // nie można zmienić *p1
int * const p2 = &a; // nie można zmienić p2

// NULL
int *p3 = NULL;    // pusty wskaźnik (bezpieczny)

// typowe błędy
*p = 5;            // X gdy p nie wskazuje na nic
int *x = 5;        // X brak &

*/