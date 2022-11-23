/*9. Realice un programa que calcule el valor
que toma la siguiente función para valores dados
x e y:
 function = (sqrt(x))/(pow(y,2)-1)
*/


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y,function;
	
	cout<<"Value x: ";
	cin>>x;
	
	cout<<"Value y: ";
	cin>>y;
	
	function = sqrt(x)/(pow(y,2)-1);
	
	cout<<"Value function: "<<function<<endl;
	
	return 0;
}

