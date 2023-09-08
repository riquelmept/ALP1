#include <iostream>
using namespace std;
int main(){
	
	int n1,n2,n3;
	cout<<"Digite o valor de n1:"<<endl;
	cin>>n1;
	
	cout<<"Digite o valor de n2:"<<endl;
	cin>>n2;
	
	cout<<"Digite o valor de n3:"<<endl;
	cin>>n3;
	
	if(n1>n2&&n2>n3)
	{cout<<" o maior numero:"<<n1<<endl;	
	}
	
	if(n2<n1&&n2<n3)
	{cout<<" o menor numero:"<<n2<<endl;
	}
	else
	{cout<<" o menor numero:"<<n3<<endl;
	}
	
	
}
