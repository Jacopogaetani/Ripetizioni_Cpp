#include <iostream>
using namespace std;
//Chiedi in input all'utente la memoria ram del proprio pc (ES.2048mb) in mb, il nome del produttore della scheda madre e la generazione del proprio processore (9,10,11...)
int main()
{
	int memoria_ram;
	cout<< " inserisci la memoria ram : ";
	cin>> memoria_ram;
	string nome_scheda_madre;
	cout<< " inserisci il nome della tua scheda madre : ";
	cin>> nome_scheda_madre;
	int gen_processore;
	cout<< " inserisci la generazione dell tuo processore : ";
	cin>> gen_processore;
	cout<< " la tua ram e : " << memoria_ram << " la tua scheda madre e : " << nome_scheda_madre << " la generazione dell tuo processore e : " << gen_processore;
	
	
	    return 0;
}
