//
//  Algorithm - Recursive Binary Search 
//  Using c++11 STL containers and features
//  set 1 of N. 
//  
//  
#include <iostream>
#include <vector>

template<typename T>
int binarySearch(const std::vector<T>& list, int start, int end, const T& target){
	if(start > end) return -1;
	
	const int middle = start + ((end - start)/2);

	if(list[middle] == target) return middle;
	else if(list[middle] > target) return binarySearch(list, start, middle - 1, target);
	
	return binarySearch(list, middle+1, end, target);
	
}

int main(){

	int target = 9;

	std::vector<int> list = {1, 2, 3, 5, 9, 11, 13, 15, 17, 19};
	binarySearch(list, 0, list.size(), target);

	return 0;
}





