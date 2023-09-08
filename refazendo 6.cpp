#include <iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Digite o valor de x:"<<endl;
	cin>>x;
	cout<<"Digite o valor de y:"<<endl;
	cin>>y;
	cout<<"Digite o valor de z:"<<endl;
	cin>>z;
	
	if(x>y||y>x+z||z>x+y){
		
        if(x==y&&y==x&&z==x){
        	cout<<"equilatero"<<endl;}
        if((x==y!=z)||(y=z!=x)||(z==x!=y)){
        	cout<<"isosceles"<<endl;}
        if(x!=y&&y!=z&&z!=x){
        	cout<<"escaleno";}
		
		}		
}
