#include <iostream>

#include "sample.h"


using namespace std;

ostream & operator<< (ostream& s, sample v){
	v.print(s);
  return s;
}

istream& operator >> (istream& s, sample &v){
  size_t len = 0;
  char lchev, colon;
	long double temp;
  vector<long double> input;

	if (s >> lchev){
		if (s >> len >> colon && colon == ':'){
			while(s >> temp){
				if (temp != '>'){
					input.push_back(temp);
				}
			}
			if (input.size() == len){
				v = sample(input);
			}else{
				s.setstate(ios::badbit);
			}
		}else{
			s.setstate(ios::badbit);
		}
	}else {
	  	s.setstate(ios::badbit);
	}

   return s;
}



int main_test(int argc, char *argv[]) {
	/* an empty sample object - initialise with a vector once
	 * you have defined the sample constructor that takes a
	 * vector
	 */

  /*
    the problem is that within the input "<2: 1.18973e+4932 1.18973e+4932 >",
    the numbers inputted is the maximum number the datatype long double can
    hold. 

    One way of fixing this me and my partner have thought of is to create a new
    data structure that takes a number that big and stores it in an array (one 
    element per digit) and use methods to perform the mathematical calculations
    that are needed. 
   */

  // my partner and I have contributed an even 50/50 amount to this work.

  // definition of member variable(s)
  vector<long double> numbers = {7, 11 ,2 ,13 ,3 ,5};


  //creating a new sample object called "a_sample"
  sample a_sample; // = { 7, 11, 2, 13, 3, 5};

	cout << "\tBefore city_test()\n";
	city_test(a_sample);
	cout << "\tAfter city_test()\n";

	/* Place your code for testing sample after this line. */

	// print vector contents from "a_sample"
	//cout << a_sample << endl;

	sample s;

	while (cin >> s){}

	if (cin.bad()) {
		cerr << "\nBad input \n\n";
	}

			cout << s << endl
			 << s.minimum() << endl
			 << s.maximum() << endl
			 << s.range() << endl
			 << s.midrange() << endl
			 << s.median() << endl
			 << s.mean() << endl
			 << s.variance() << endl
			 << s.std_deviation() << endl;

			return 0;

}

void sample::print(ostream &o) {
  // prints sample vector to an output stream
  o << "<" << numbers.size() << ": ";
   for(vector<long double>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       o << *i << " ";
  }
   o << ">";
}

long double sample::minimum() {
  long double n = numbers.size();
  long double min = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }
  return min;
}

long double sample::maximum() {
  long double n = numbers.size();
  long double max = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] > max){
      max = numbers[i];
    }
  }
  return max;
}

long double sample::range() {
   long double max = maximum();
   long double min = minimum();
  long double range = max - min;

  return range;
}

long double sample::midrange() {
  long double max = maximum();
  long double min = minimum();
  long double midrange = (max + min)/2;

  return midrange;
}

long double sample::mean(){
  long double n = numbers.size();
  long double total = 0;
  long double mean = 0;
  for (int i = 0; i < n; ++i){
    total = total + numbers[i];
  }
  mean = total/n;
  return mean;
}

long double sample::variance(){
  long double m = mean();
  long double n = numbers.size();
  long double tmp = 0;

  for (int i = 0; i < n; i++){
    tmp += (numbers[i] - m)*(numbers[i] - m);
  }
  return tmp/n;
}

long double sample::std_deviation(){
  long double var = variance();
  long double std = sqrt(var);

  return std;
}

long double sample::median(){
  size_t n = numbers.size();
  long double median = 0;

  sort(numbers.begin(), numbers.end());

  if (n % 2 == 0){
    median = (numbers[n/2 - 1] + numbers[n/2])/2;
	      }
  else {
    median = numbers[n/2];
    }
    return median;
}
