#include<iostream>
using namespace std;
 main (){
	float largura_t, comprimento_t, largura_p, comprimento_p, tij, ntotal, parede;
	cout<<"Digite o valor da largura do tijolo em cm :"<<endl;
	cin>>largura_t;
	cout<<"Digite o valor do comprimento do tijolo em cm :"<<endl;
	cin>>comprimento_t;
	cout<<"Digite o valor da largura da parede:"<<endl;
	cin>>largura_p;
	cout<<"Digite o valor do comprimento da parede:"<<endl;
	cin>>comprimento_p;
	
	tij=(largura_t*comprimento_t)/10000;
	parede=largura_p*comprimento_p;
	
	ntotal=(parede)/tij;
	cout<<"A quantidade de tijolos sera:"<<ntotal;
	
	
	
	
	
	
}
