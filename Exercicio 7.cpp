#include<iostream>
using namespace std;
int main(){
	int dia, mes, ano;
	cout<< "Digite um numero inteiro correspondente a dia:"<<endl;
	cin>>dia;
	cout<< "Digite um numero inteiro correspondente a mes:"<<endl;
	cin>> mes;
	cout<< "Digite um numero inteiro correspondente a ano:"<<endl;
	cin>>ano;
	
	if((0>dia<32)&&(0>mes<13)&&(1899>ano<2101)){
		cout<<"Data valida"<< endl;
	}	
	if((0<=dia>=32)||(0<=mes>=13)||(1899<=ano>=2101))
	{cout<<"Data invalida";
	}
	
	
	
	
	
}
