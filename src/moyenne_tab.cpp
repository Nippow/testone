#include "moyenne_tab.h"

int moyenne (int tab[], int N)
{
	int somme=0;

	for (int i=0; i<N; i++)
	{
		somme = somme + tab[i];
	}

	return (somme/N); //retourne un entier !
}
