#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
#include <algorithm>

using namespace std;
#include "city.hh"

class sample : public city {
  // DON'T CHANGE ANYTHING ABOVE THIS LINE!!! (You can add more includes)
 private:
  vector<long double> numbers;
 public:

  sample(){};
  sample(vector<long double> v) : numbers(v){};


  void print();
  vector<long double> get_data();
  long double minimum();
  long double maximum();
  long double range();
  long double midrange();
  long double mean();
  long double variance();
  long double std_deviation();
  long double median();

};


vector<long double> sample::get_data(){
  return numbers;
}


/* With normal (non-generic) code, the source (.cc) includes the header (.h). */
#endif
