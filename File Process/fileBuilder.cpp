// fileBuilder.cpp
// exactly as the name says
// this program writes a 
// simple text file for numerical output. 
#include <fstream>
/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
// Define global variables
char filename[] = "test.txt";
int count =50;

int randNumber();


	
bool exists_test3 (const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}

int randNumber(){

   
  //printf ("Random number: %d\n", rand()%100);
  int capture = rand()%100+1;
  return capture;

}

void fileWrite(){

  if(exists_test3(filename)){
  	if( remove(filename) == 0 ){
  		printf("\n\n-> The old file has been removed\n");
  	}else{
  		printf("\n\nThere was an error in deleting the file.");
  	}
  	
  }

  std::ofstream ofs;
  ofs.open (filename, std::ofstream::out | std::ofstream::app);

  for(int i = 0; i < count; i++){
  	if(i != 0){
  		ofs << "\n";

  	}
  ofs << randNumber();

  }

  ofs.close();
  printf("\n\n*** The New file has been written. *** \n\n");


}

int main(){
	printf("\n\n*** The current program produces: %d new lines *** \n ***  and produces a file named: %s ***", count, filename);

	srand (time(NULL));
	fileWrite();

	return 0;

}