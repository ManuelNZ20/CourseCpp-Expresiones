/*4. Escribe la siguiente expresión como expresión
en C++ r = a+(b/(c-d))
*/

#include<iostream>

using namespace std;
int main(){
	float r,a,b,c,d;
	cout<<"Write value of a: ";
	cin>>a;
	cout<<"Write value of b: ";
	cin>>b;
	cout<<"Write value of c: ";
	cin>>c;
	cout<<"Write value of d: ";
	cin>>d;
	r = a+(b/(c-d));
	
	cout<<"Result: "<<r<<endl;
	
	return 0;
}