#include<iostream>
using namespace std;
int main(){
	
	int x,y,z,
	tri;
	cout<<"Digite o valor de x:"<<endl;
	cin>>x;
	cout<<"Digite o valor de y:"<<endl;
	cin>>y;
    cout<<"Digite o valor de z:"<<endl;
	cin>>z;
	
	//Para construir um triangulo, é necessario que a medida de um de seus lados seja < que a soma das medidas dos outos dois.
	
	if(x<y+z||y<x+z||z<x+y){
		if(x==y&&y==z&&x==z){
		cout<<"Ele eh equilatero";
		}
		if((x==y&&y!=z)||(x==z&&y!=z)||(z==y&&x!=y)){
		cout<<"Ele eh isosceles";
        }
	    if(x!=y&&y!=z&&z!=x){
	    cout<<"Ele eh escaleno";
		}
		}
	
		
	}
	
	

