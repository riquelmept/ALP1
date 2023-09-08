#include<iostream>
using namespace std;
int main(){
	float x,y, med, prod;
	cout<<"Digite o valor de x:"<<endl;
	cin>>x;
	cout<<"Digite o valor de y:"<<endl;
	cin>>y;
	
	if(x&&y>0&&x>y){
	    med=(x+y)/2;	
		cout<<"Media das duas variaveis:"<<med<<endl;
	}
	
	if(x&&y>0&&y>x){
		prod=x*y;
		cout<<"Produto das duas variaveis:"<<prod<<endl;
	}
	
	
	
	
}
