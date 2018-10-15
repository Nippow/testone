#include "saisie_tab.h"
using namespace std;

void saisie(int tableau[], int N)
{
	for (int i=0; i<N; i++)
	{
		cout<<"valeur "<<i<<" ? "<<endl;
		cin>>tableau[i];
	}
	
	return;
}