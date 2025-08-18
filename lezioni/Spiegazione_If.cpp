//COSTRUTTO IF

#include <iostream>
using namespace std;

int main() {
    /*If (dall'inglese "se") è un costrutto molto importante del linguaggio c++, questo costrutto serve a fare in modo
     * che determinate istruzioni vengano eseguite solo se una determinata condizione è soddisfatta.
     * La "costruzione" di un If è molto semplice
     * if (condizione)
     * {
            blocco di codice che si vuole eseguire solamente ad una determinata condizione
        }
    Immaginiamo di dover sviluppare una calcolatrice, nella quale l'utente inserirà due numeri,e dopo scriverà in input "addizione" o "sottrazione"
    per scegliere l'operazione da svolgere

     */


    //Sezione dichiarativa
    int num1, num2;
    string operazione; //Per far inserire "addizione" o "sottrazione"

    cout<<"Inserisci il primo numero: ";
    cin>>num1;
    cout<<"Inserisco il secondo numero: ";
    cin>>num2;

    cout<<"Che operazione vuoi svolgere? [addizione/sottrazione] : ";
    cin>>operazione;

    //Inizio costrutto if

    if (operazione=="addizione") { //Condizione da soddisfare
        cout<<num1+num2;
    }

    /*Qui il compilatore va a verificare il contenuto della variabile "operazione" e se corrisponde ad "addizione" va a svolgere le istruzioni scritte
     * nel blocco di codice, altrimenti salta tutto il blocco if, andando avanti.
     * Andando avanti, si potrebbe imbattere in "else if", che svolge la stessa identica funzione di if, ovvero eseguire istruzioni ad una determinate condizioni.
     *
     * ATTENZIONE: per ogni variabile usare SEMPRE SOLO UN IF mentre invece possiamo utilizzare quanti else if vogliamo
     */

    else if (operazione == "sottrazazione") {
        cout<<num1-num2;
    }

    /*Qui ci potrebbero essere INFINITI else if
     *
     * esiste un'ultima cosa da sapere di questo costrutto, ovvero che se NESSUNA condizione indicata in if e else if viene soddisfatta viene
     * eseguita un'altra parte di codice che si può inserire: ELSE.
     *
     */

    else {
        cout<<"errore!!"<<endl;
    }

    /*Else è comodissimo per la gestione degli errori da parte dell'utente, è sempre buona norma inserirlo*/

    /*ESEMPI PRATICI DI ESERCIZI CON IF
     *
     *  Il programma legge due numeri e controlla se il primo è maggiore del secondo.
     */


    //Sezione dichiarativa
    int n1, n2;

    cout<<"Inserire il primo numero: ";
    cin>>n1;
    cout<<"Inserire il secondo numero: ";
    cin>>n2;

    if (n1 > n2) {
        cout<<n1 <<" è maggiore di "<< n2;
    }
    else if (n2 > n1) {
        cout<<n2 <<" è maggiore di "<< n1;
    }
    else {
        cout<<"errore!!"<<endl;
    }

    return 0;
}