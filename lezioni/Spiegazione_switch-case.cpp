/*SPIEGAZIONE DI SWITCH/CASE
 *
 *Il costrutto Switch/case funziona in maniera molto similare ad if. Entrambi eseguono del codice solo se delle condizioni sono soddisfatte,
 *per questo si potrebbero svolgere degli esercizi con switch/case e if e ottenere lo stesso input, ma alla base ci possono essere situazioni
 *in cui è meglio scegliere uno rispetto all'altro. Di solito questo accade quando bisogna verificare diverse condizioni che possono accadere.
 *
 *La costruzione dello switch/case è questa qui;
 *
 *switch(variabile da prendere in esame){
 *  case 1:
        istruzione da svolgere
        break
    case 2:
        istruzione da svolgere
        break
    default
    *   istruzione da svolgere
 *
 *}

 Immaginiamo di voler vedere quali siano stati i GOTY(Game of the year, ovvero i giochi migliori di ogni anno) Dal 2019 al 2024
 */

#include <iostream>
using namespace std;

int main() {
    int anno;
    cout<<"Inserisci l'anno del quale vuoi sapere il goty (2019-2024): ";
    cin>>anno;

    switch (anno){ //Il compilatore va a controllare il contenuto della variabile anno
        case 2019:
            cout<<"Sekiro: Shadows die twice <3"<<endl;
            break; //è IMPORTANTISSIMO inserire break per evitare problemi nel codice (è molto facile scordarlo)
        case 2020:
            cout<<"The last of us part II"<<endl;
            break;
        case 2021:
            cout<<"It takes two"<<endl;
            break;
        case 2022:
            cout<<"Elden ring <3<3<3"<<endl;
            break;
        case 2023:
            cout<<"Baldur's gate III <3"<<endl;
            break;
        case 2024:
            cout<<"Astrobot <3"<<endl;
            break;
        default:
            cout<<"errore!!"<<endl; //Possiamo vedere default come "else", ottimo per gestire l'errore dell'utente

    }

    /*È evidente vedere come l'utilizzo di switch in questi casi sia molto più comodo per il programmatore e
     * l'eleganza del codice. Aver utilizzato if avrebbe richiesto più tempo per lo sviluppo, per quanto
     * il codice si sarebbe comportato allo stesso modo
     */



    return 0;
}