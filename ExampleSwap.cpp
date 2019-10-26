#include <iostream>
using namespace std;


// you can use the same name for the function
//the compiler know the 'signanure matching algorithm'
inline void swap(int& i, int& j){
	int temp = i;
	i = j;
	j = temp;
}

inline void swap(double& i, double& j){
	double temp = i;
	i = j;
	j = temp;
}

int main(){
	
	int m=5, n=10;
	double x=5.3, y=10.6;	
	cout << "inputs:" << m << "," << n << endl;
	swap(m,n);
	cout << "outputs:" << m << "," << n << endl;
	cout << "inputs:" << x << "," << y << endl;
	swap(x,y);
	cout << "outputs:" << x << "," << y << endl;
	

	return 0;
}
