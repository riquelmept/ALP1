#include <iostream>
using namespace std;
int main(){
	float quilo,i, peixe, taxai, renddia, resf;
	cout<<"Quantidade de quilos de peixes vendidos por dia:"<<endl;
	cin>>quilo;
	
	cout<<"Taxa de juros diaria da prefeitura:"<<endl;
	cin>>i;
	
	peixe=20;
	renddia=quilo*peixe;
	taxai=renddia*(i/100);
	cout<<"O valor que paga de juros (dinheiro) sobre a quantidade de quilos de peixes vendidos por dia eh:"<<taxai<<endl<<endl;
	
	resf=renddia-taxai;
	cout<<"Seu rendimento diario, retirado o valor da taxa da prefeitura eh:"<<resf;
	
	
	
	
}
