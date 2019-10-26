#include <iostream>
#include<string>
using namespace std;

//Have to use Swap rather than swap
// https://en.cppreference.com/w/cpp/algorithm/swap
template <class T>
inline void Swap(T& d, T& s){
	T temp = d;
	d = s;
	s = temp;
}

int main(){
	
	int m=5, n=10;
	double x=5.3, y=10.6;
 	string mr="George";
  string ms="Martha";
	cout << "inputs:" << m << "," << n << endl;
	Swap(m,n);
	cout << "outputs:" << m << "," << n << endl;
	cout << "inputs:" << x << "," << y << endl;
	Swap(x,y);
	cout << "outputs:" << x << "," << y << endl;
	cout << "inputs:" << mr << "," << ms << endl;
	Swap(mr,ms);
	cout << "outputs:" << mr << "," << ms << endl;

	return 0;
}
