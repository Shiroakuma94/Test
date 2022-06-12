#include <iostream>
#include <string>
#include "class.h"

void printvalue(int &);
template<typename T>
void printvalue(T &); 

struct comp {

  std::string name;

  bool isempty;

  int age;

  float hp;
  comp * next;
 };


int main () {

 comp * mycomp = new comp;
 
 
 mycomp->next = new comp;
 
 mycomp =  mycomp->next;
 
 
 mycomp->name = "Alessio";
 
 
 mycomp->age = 30;
 
 
 mycomp->hp = 0.99f;
 
 
 printvalue(mycomp->name);



return 0;

}



void printvalue(int & a) {

  std::cout << a << "\n";



}

template<typename T> 
void printvalue( T & a){


  std::cout << a << "\n"; 

}

