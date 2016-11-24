#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
#include "city.hh"

class sample : public city {
  // DON'T CHANGE ANYTHING ABOVE THIS LINE!!! (You can add more includes)
 public:
  vector<long double> numbers;
  
  sample();
  sample(vector<long double> v) : numbers(v){};
  
  void print();
  
};
// test

void sample::print() {
  // prints sample vector to an output stream
  cout << "<" << numbers.size() << ": ";
   for(vector<long double>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       cout << *i << " ";
  }
   cout << ">";
   }







/* With normal (non-generic) code, the source (.cc) includes the header (.h). */
#endif
