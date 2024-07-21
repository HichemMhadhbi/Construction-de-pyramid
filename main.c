/*Les habitants adorent les constructions en forme de pyramide ; de nombreux b�timents officiels ont d'ailleurs cette forme. Pour f�ter les 150 ans de la construction de la ville, le gouverneur a demand� la construction d'une grande et majestueuse pyramide � l'entr�e de la ville. Malheureusement, en ces p�riodes de rigueur budg�taire, il y a peu d'argent pour ce projet. Les architectes souhaitent cependant construire la plus grande pyramide possible �tant donn� le budget pr�vu.

Trois exemples de pyramides, de hauteur 1, 2 et 3
Ce que doit faire votre programme :
Votre programme doit d'abord lire un entier : le nombre maximum de pierres dont pourra �tre compos�e la pyramide. Il devra ensuite calculer et afficher un entier : la hauteur de la plus grande pyramide qui pourra �tre construite, ainsi que le nombre de pierres qui sera n�cessaire.

EXAMPLEs

EXAMPLE 1

input:
20
output:
3
14

EXAMPLE 2

input:
26042

output:
42
25585  */

#include <stdio.h>
#include <stdio.h>

int main()
{
    int i, max_pierres, hauteur, total_pierres;

    do {
        printf("Veuillez entrer le nombre maximum de pierres (nombre positif) : ");
        scanf("%d", &max_pierres);
        if (max_pierres <= 0) {
            printf("Veuillez entrer un nombre positif.\n");
        }
    } while (max_pierres <= 0);

    hauteur = 0;
    total_pierres = 0;
    i = 1;

    while (total_pierres + (i * i) <= max_pierres) {
        total_pierres += i * i;
        hauteur++;
        i++;
    }

    // Affichage des r�sultats
    printf("La hauteur de la plus grande pyramide qui peut �tre construite est : %d\n", hauteur);
    printf("Le nombre de pierres necessaire pour cette pyramide est : %d\n", total_pierres);

    return 0;
}

