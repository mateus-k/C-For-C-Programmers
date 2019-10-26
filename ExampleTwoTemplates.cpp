#include <iostream>
using namespace std;

template <class T1, class T2>
void copy(const T1 source[], T2 destination[], int size){
	for(int i=0; i<size; i++)
		//safe cast
		// If don't have the safe cast is gonna be a error
		destination[i] = static_cast<T2>(source[i]);
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

	const int a[] = {1,2,3};
	double b[3];
	copy(a,b,3);
	elem(b,3);	
	const double c[] = {2.1, 2.2, 2.3};	
	copy(c,b,3);
	elem(b,3);

	return 0;
}
