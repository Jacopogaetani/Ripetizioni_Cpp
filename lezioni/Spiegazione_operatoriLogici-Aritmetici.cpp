/*OPERATORI LOGICI E ARITMETICI
 *
 *Gli operatori logici si usano spesso negli if per verificare che una o più condizioni abbiano un soddisfacimento comune
 *ovvero che più condizioni siano rispettate o non allo stesso momento, è più facile a farsi che a dirsi
 */

#include <iostream>
using namespace std;

int main() {
    /*Immaginiamo che per eseguire un videogioco AAA (con grande bisogno di risorse) si abbia bisogno di:
     * 16GB Ram
     * nvidia 4050
     * intel i9
     *
     * Quindi se anche solo una di queste tre componenti non rispecchia le caratteristiche diverse il gioco non si avvierà
     *
     * In questo caso è necessario usare AND (&&) che farà eseguire il blocco del codice dell'if SOLO SE TUTTE LE CONDIZIONI SONO SODDISFATTE
     **/

    int ram,schedaVideo;
    string processore;

    cout<<"Inserisci la ram in GB: ";
    cin>>ram;
    cout<<"Inserisci il modello di scheda madre nvidia inserendo il numero corrispondente (es.4070) ";
    cin>>schedaVideo;
    cout<<"Inserisci il modello del processore: ";
    cin>>processore;

    if (ram >= 16 && schedaVideo >=4050 && processore == "i9") { //Tutte e tre devono essere vere
        cout<<"Le caratteristiche permettono l'avvio del gioco"<<endl;
    }
    else {
        cout<<"impossibile avviare il gioco"<<endl;
    }

    /*Immaginiamo ora che per usufruire di uno sconto dei biglietti per un museo si debba essere abbonati
     * al servizio di visite guidate nazionali o essere minori di 18 anni.
     *
     * Ora basta che solamente una di queste due condizioni sia vera per far eseguire un determinato blocco di codice
     * quindi è necessario OR (||) che farà in modo che anche solo una delle due sia sufficiente per soddisfare una condizione
     */

    int eta;
    string conferma_abbonamento;
    bool abbonato;

    cout<<"Inserisci la tua età: ";
    cin>>eta;
    cout<<"Sei abbonato? [si/no] ";
    cin>>conferma_abbonamento;

    if (conferma_abbonamento == "si") {
        abbonato = true;
    }
    else if (conferma_abbonamento == "no") {
        abbonato = false;
    }
    else {
        cout<<"errore"<<endl;
    }

    if (abbonato == true || eta < 18) {
        cout<<"Hai diritto ad uno sconto";
    }
    else {
        cout<<"Non hai diritto ad uno sconto";
    }
    return 0;
}