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
  vector<long double> get_data();
  long double minimum();
  long double maximum();
  long double range(sample);
  long double midrange(sample);

};
// test


ostream & operator<< (ostream& s, sample n){
	n.print();
  return s;
}

vector<long double> sample::get_data(){
  return numbers;
}


/* With normal (non-generic) code, the source (.cc) includes the header (.h). */
#endif
