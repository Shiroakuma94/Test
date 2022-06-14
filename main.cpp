#include <iostream>
#include <string>
#include "class.h"

  void print ( int *) ;


template<typename T>
struct vec {

 T x;

 T y;

};

template<typename T>
std::ostream& operator<< ( std::ostream & os ,const vec<T> & v ){

os << v.x << "," << v.y<<" ";

return os;

}

int main () {

  
vec<int> v;


  
 v.x = 5;
 v.y = 7;
  
  
  
 std::cout<< v << "\n"; 
  
  
  return 0;

}

void print ( int* a) {


  
  
   std::cout<< "vector value is : "<<*a<<"\n";
  

}



