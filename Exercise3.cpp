/*3. Escribe la siguiente expresión 
como expresión en C++. result = (a+(b/c))/(d+(e/f))
*/

#include<iostream>

using namespace std;

int main(){
	float result,a,b,c,d,e,f;
	
	cout<<"Write value of a: ";
	cin>>a;
	
	cout<<"Write value of b: ";
	cin>>b;
	
	cout<<"Write value of c: ";
	cin>>c;
	
	cout<<"Write value of d: ";
	cin>>d;
	
	cout<<"Write value of e: ";
	cin>>e;
	
	cout<<"Write value of f: ";
	cin>>f;
	
	
	result = (a+(b/c))/(d+(e/f));
	
	cout<<"Result: "<<result<<endl;
	
	return 0;
}