/*funciones:*/

#include <iostream>
#include <string>
using namespace std;
bool EsMultDe17(int n);
int main(){
	string msg="no es multiplo";
	int num;
	cout<<"ingtrese un numero"<<endl;
	cin>>num;
	if(EsMultDe17(num)){
		msg="es multiplo";
	}
	
	cout<<msg<<endl;
	return 0 ;
	
}
bool EsMultDe17(int n){
	bool flag=false;
	if(n %17 ==0)
	{
		flag =true;
	}
		return flag;
	
}