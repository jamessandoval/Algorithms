// readFile.cpp
// 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

char filename[] = "test.txt";

template<typename T>

int readFile(T &v, std::string s){
	int counter = 0;

   std::fstream fd(s,std::ios_base::in);
   typename T::value_type tmp;

   if (fd == 0)
  {
    fputs ("error opening file\n\n",stderr);
    abort();
  }
   
   while( fd >> tmp ){
       v.push_back(tmp);
   	   counter++;
   }

   fd.close();

   if(counter == 0){
   	std::cout << "file is empty.";
   	abort();
   }else{
   	std::cout << "\nFile read complete.\n\n";
   }

   return counter;

}

int main () {

	// You can change the typename here to create a vector of anything 
	std::vector<int> list;

	std::cout << readFile(list, filename) << " lines.\n\n";
   
  
  return 0;
}