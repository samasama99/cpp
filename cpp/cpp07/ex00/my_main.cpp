#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
  int x_int = 10; 
  int y_int = 5; 

  std::cout << "before Swap (int) " << x_int << " " << y_int <<'\n';
  swap(x_int, y_int);
  std::cout << "after Swap (int) " << x_int << " " << y_int <<'\n';

  float x_float = 10.65f; 
  float y_float = 5.2f; 
  std::cout << "min (float) " << x_float << " " << y_float  << " min : " << min(x_float, y_float) <<'\n';
  std::cout << "max (float) " << x_float << " " << y_float  << " max : " << max(x_float, y_float) <<'\n';


  std::string name1 = "ouss";
  std::string name2 = "reda";

  std::cout << "before Swap (string) " << name1 << " " << name2 <<'\n';
  swap(name1, name2);
  std::cout << "after Swap (string) " << name1 << " " << name2 <<'\n';

}
