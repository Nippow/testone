#include "saisie_tab.h"
#include "moyenne_tab.h"

using namespace std;

int main()
{

	int tab[10];
	int moy;

	saisie(tab, 10);
	
	moy = moyenne(tab, 10);
	cout<<"moyenne = "<<moy<<endl;

	return 0;
}