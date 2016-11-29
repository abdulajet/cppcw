#ifndef _SAMPLET_H_
#define _SAMPLET_H_

#include <iostream>
#include <vector>
using namespace std;
#include "cityt.hh"

template <typename T>
class samplet : public cityt<T> {
  // DON'T CHANGE ANYTHING ABOVE THIS LINE!!! (You can add more includes)

template <typename A_Type>
class samplet : public cityt<A_Type> {
  // DON'T CHANGE ANYTHING ABOVE THIS LINE!!! (You can add more includes)
  private:
  vector<A_Type> numbers;
 public:

  sample();
  sample(vector<A_Type> v) : numbers(v){};


  void print();
  vector<A_Type> get_data();
  A_Type minimum();
  A_Type maximum();
  A_Type  range();
  A_Type midrange();
  A_Type  mean();
  A_Type variance();
  A_Type std_deviation();
  A_Type median();

};

/* With generic code, it's the header (.h) that includes the source (.cc), not the other way around that is the normal practice with non-generic code. */
#include "samplet.cc"
#endif