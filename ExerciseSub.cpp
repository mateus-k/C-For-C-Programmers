#include <iostream>
using namespace std;

//subtract the elements of a array
template <class Summable>
Summable sum(const Summable data[], int size, Summable s= 0){
	for (int i=0; i<size; i++)
		s -= data[i]; //most work for Summable
	return s;
}


//Show the elements of a array
template <class T>
T elem(T data[], int size){
  cout << "{";	
	for (int i=0; i<size; i++){
		cout << data[i];
		if (i<size-1) cout << ",";
	}
	cout << "}" << endl;
}

int main(){
	
	cout << "template for sub()" << endl;
	int a[] = {1,2,3};
	double b[] = {2.1, 2.2, 2.3};
	cout << sum(a,3) << endl;
	cout << sum(b,3) << endl;
	elem(a,3);
	elem(b,3);

	return 0;
}
