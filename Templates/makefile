all: mergeSort binarySearch

mergeSort: mergeSort.cpp 
	g++ --std=c++11 -Wall -Werror -pedantic -O3 mergeSort.cpp -o mergeSort

binarySearch: binarySearch.cpp
	g++ --std=c++11 -Wall -Werror -pedantic -O3 binarySearch.cpp -o binarySearch

clean:
	rm mergeSort > /dev/null 2>&1 || true
	rm binarySearch > /dev/null 2>&1 || true
