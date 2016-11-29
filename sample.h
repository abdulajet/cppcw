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

  sample();
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
// test


ostream & operator<< (ostream& s, sample v){
	v.print();
  return s;
}

istream& operator >> (istream& s, sample &v){
  int len;
  char lchev, colon, temp;

  if (s >> lchev){
    if ((s >> len >> colon) && (lchev == '<' && colon == ':')){
      while(s >> temp){
        if (temp == '>'){
          break;
        }else{
          v.get_data().push_back(temp);
        }
      }

      if (v.get_data().size() != len) {
        //error
      }

    }else{
      s.setstate(ios::badbit);
    }
  }

  //test
  return s;
}

vector<long double> sample::get_data(){
  return numbers;
}


/* With normal (non-generic) code, the source (.cc) includes the header (.h). */
#endif
