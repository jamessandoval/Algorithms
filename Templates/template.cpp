#include <iostream>
#include <vector>

using namespace std;

template <class T>

void output(const T & n){
	
	cout << n << endl;
}

template<typename T>
void vectorProcess(vector<T> const& list){


	cout << "\nFirst Method to iterate...Standard:\n";

	// standard iterator
	for(int i = 0; i < list.size(); i++){
		cout << "element: " << i << ":" << list[i];
		cout << "\n";
	}

	// using elem : vector
	cout << "\nVery Similar to for each element\n";

	for (int elem : list) {
		cout << elem << " ";
	}

}

int main(){

	vector<int> list = {1, 3, 5, 7, 9};
	
	vectorProcess(list);

	cout << "\n EOF \n";
	return 0;
}