#include <iostream>
using namespace std;
int main (){
	int n1,n2,num,op1,op2,op3,op4;
	cout<<"Digite o valor de dois numeros inteiros:"<<endl;
	cin>> n1;
	cin>> n2;
	cout<<"Escolha um numero de 1 a 4:"<<endl;
	cin>>num;
	if(num!=1&&num!=2&&num!=3&&num!=4){
		cout<<"Opcao invalida"<<endl;}
	
	op1=(n1+n2)/2;	
	if(num==1){
	  cout<<"A media de dois numeros eh:"<<op1<<endl;
	  cin>>op1;	}
	
	op2=n1-n2;
	if((num==2)&&(n1>n2)||(n2>n1)){
		cout<<"Diferença do maior pelo menor eh:"<<op2<<endl;
        cin>>op2;}
	
	op3=n1*n2;
	if(num==3){
      cout<<"O produto entre os dois numeros digitados eh:"<<op3<<endl;
      cin>>op3;}

	op4=n1/n2;
	if((num==4)&&(n1/n2)){
	   cout<<"A divisao do primeiro numero pelo segundo numero eh:"<<op4<<endl;
	   cin>>op4;}
		
	}
   
	
	

