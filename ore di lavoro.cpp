#include <iostream>
using namespace std;

//Creare un programma in C++ che risolva il seguente problema.
//Tre persone eseguono un lavoro. Ognuna di esse è impiegata per un certo numero, anche differente, di ore. Conoscendo il compenso complessivo per il lavoro dividerlo in modo proporzionale (in base al n. di ore) fra i tre lavoratori.
//Prima di scrivee il programma, individuare gli input e gli output da restituire
int main() 
{
  int primo_lavoratore,secondo_lavoratore,terzo_lavoratore;
  float complessivo, ore_lavorate, pagamento_orario;
  cout<< "inserisci il numero di ore lavorate del primo lavoratore : ";
  cin>> primo_lavoratore;
  cout<< "inserisci il numero di ore lavorate dell secondo lavoratore : ";
  cin>> secondo_lavoratore;
  cout<< "inserisci il numero di ore lavorate dell terzo lavoratore : ";
  cin>> terzo_lavoratore;
  cout<< " inserisci il complessivo : ";
  cin>> complessivo;
  ore_lavorate = primo_lavoratore + secondo_lavoratore + terzo_lavoratore;
  pagamento_orario = complessivo / ore_lavorate;
  cout<< " pagamento orario : " << pagamento_orario;
  cout<< "\n pagamento orario primo lavoratore schiavio : "<< pagamento_orario * primo_lavoratore;
  cout<< "\n pagamento orario secondo lavoratore schiavio : "<< pagamento_orario * secondo_lavoratore;
  cout<< "\n pagamento orario terzo lavoratore schiavio : "<< pagamento_orario * terzo_lavoratore;
  
  
  
  
  
  return 0;
}
