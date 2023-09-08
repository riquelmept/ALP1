#include <iostream>
using namespace std;
int main(){
	int nota1, nota2, nota3, nota4, medt, MF,A,B,C,D,E;
	cout<<"Digite o valor de nota1:"<<endl;
	cin>>nota1;
	cout<<"Digite o valor de nota2:"<<endl;
	cin>>nota2;
	cout<<"Digite o valor de nota3:"<<endl;
	cin>>nota3;
	cout<<"Digite a media do trabalho final:"<<endl;
	cin>>medt;
	
	MF=((((nota1+nota2+nota3)/3)*8)+ 2*medt)/10;
	cout<<"Sua media final eh:"<<MF<<endl<<endl;
	
	if(MF>=90){
	  cout<<"Conceito A"<<endl<<endl;}
	if(MF>=75&&MF<90){
	  cout<<"Conceito B"<<endl<<endl;}
	if(MF>=60&&MF<75){
	  cout<<"Conceito C"<<endl<<endl;} 	
	if(MF>=40&&MF<60){
	  cout<<"Conceito D"<<endl<<endl;}
	if(MF<40){
	  cout<<"Conceito E"<<endl<<endl;}  
	   
	if((MF>=90)||(MF>=75&&MF<90)||(MF>=60&&MF<75)){
	  cout<<"Aprovado!"<<endl;} 
    if((MF>=40&&MF<60)||(MF<40)){
      cout<<"Reprovado!"<<endl;}	   
			
	
	}
	
	
	
	
	
	
	
	
