#include <iostream>
using namespace std;
int main(){
	
	
	/*Un'azienda sta cercando un nuovo impiegato. I candidati devono soddisfare determinati requisiti per essere considerati idonei. Scrivi un programma che chieda all'utente di inserire:

    L'età del candidato (un intero).
    Se il candidato ha una laurea (1 se sì, 0 se no).
    Gli anni di esperienza del candidato (un intero).

 Il programma deve quindi determinare se il candidato è idoneo in base ai seguenti criteri:

    Il candidato deve avere un'età compresa tra 25 e 35 anni inclusi.
    Il candidato deve avere una laurea o almeno 3 anni di esperienza.

Il programma deve stampare "Candidato idoneo" o "Candidato non idoneo" a seconda dei casi.*/
	
	
	int eta,esperienza,laurea;
	
	
	cout << "scrivi la eta del candidato:";
	
	cin >> eta;
	
	cout << "quanti anni di esperienza ha:";
	
	cin >> esperienza;
	
	cout << "hai una laurea:";
	
	cin >> laurea;
	
	
	if (laurea==1){
		
		cout << "il candidato ha una laurea"<<endl;
		
	}
	
	
	else {
		
		cout << "il candidato non ha una laurea"<<endl;
		
		
	}
	if (eta>=25 && eta<=35 && (laurea==1 || esperienza>=3)) {
		
		cout << "il candidato e idoneo"<<endl;
	
	} 
	else{
		
		cout << "il candidato non e idoneo"<<endl;
	}
	
	return 0;
}
