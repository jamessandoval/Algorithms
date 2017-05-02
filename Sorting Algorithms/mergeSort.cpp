// Merge and merge Sort
#include <stdlib.h>
#include <iostream>


template<typename T> void merge(T begin, T middle, T end, T res)
{
	T a = begin, b = middle, r = res;
	while (a < middle && b < end)
		if (*a < *b) *r++ = *a++;
		else *r++ = *b++;

	while (a < middle) *r++ = *a++;
	while (b < end) *r++ = *b++;
	while (begin < end) *begin++ = *res++;
}
 
template<typename T> void mergesort(T begin, T end, T res)
{
	int s = end-begin;
	if (s > 1)
	{
		T middle = begin+s/2;
		mergesort(begin, middle, res);
		mergesort(middle, end, res);
		merge(begin, middle, end, res);
	}
}

int main(){
	int sorted[10];

	int list[10] = {1, 3, 2, 5, 6, 7, 2, 4, 5, 5};

	std::cout << "Before:" << std::endl;

	for (int elem : list) {
		std::cout << elem << " ";
	}

	std::cout << std::endl; 

	mergesort(list, list + 10, sorted);

	std::cout << "After:" << std::endl;

	for (int elem : sorted) {
		std::cout << elem << " ";
	}

	std::cout << std::endl; 


	return 0;
}







