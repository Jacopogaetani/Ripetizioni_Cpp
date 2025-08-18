#include <iostream>
using namespace std;

int main()
{
   int primolavoratore,secondolavoratore,terzolavoratore,noreprimo,noresecondo,noreterzo;
   int norecomplessive;
   
	float primopagamento,secondopagamento,terzopagamento;
	
	cout << "ore primo lavoratore:";
	
	cin >> primolavoratore;
	
	cout << "ore secondo lavoratore:";
	
	cin >> secondolavoratore;
	
	cout << "ore terzo lavoratore:";
	
	cin >> terzolavoratore;
	
    norecomplessive=primolavoratore+secondolavoratore+terzolavoratore;
    
    cout << norecomplessive<<endl;
	
	float pagamentocomplessivo,pagamentoorario;
	
	cout << "pagamentocomplessivo";
	
	cin >> pagamentocomplessivo;
	
	pagamentoorario=pagamentocomplessivo/norecomplessive;
	
	cout << "il pagamento orario e " << pagamentoorario<<endl;
	
	
	
	primopagamento=pagamentoorario*primolavoratore;
	
	cout << "il primo pagamento e " << primopagamento<<endl;
	
	secondopagamento=pagamentoorario*secondolavoratore;
	
	cout << "il secondo pagamento e " << secondopagamento<<endl;
	
	terzopagamento=pagamentoorario*terzolavoratore;
	
	cout << "il terzo pagamento e " << terzopagamento<<endl;
	
	

	
	
	
	
    return 0;
}
