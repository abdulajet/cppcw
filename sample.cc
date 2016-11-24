#include <iostream>

#include "sample.h"

using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty sample object - initialise with a vector once
	 * you have defined the sample constructor that takes a
	 * vector
	 */

  // integers for holding the long doubles for printing
  int x;
  int y;
  int z;
  int m;

  // definition of member variable(s)
  vector<long double> numbers = {1, 2 ,3 ,4 ,5 ,6};

  //creating a new sample object called "a_sample"
  sample a_sample(numbers); // = { 7, 11, 2, 13, 3, 5};

  // cast long doubles to integers
    x = a_sample.minimum();
    y = a_sample.maximum();
    z = a_sample.range(a_sample);
    m = a_sample.midrange(a_sample);



	cout << "\tBefore city_test()\n";
	city_test(a_sample);
	cout << "\tAfter city_test()\n";

	/* Place your code for testing sample after this line. */


//	a_sample.print();

	// print vector contents from "a_sample"
	cout << a_sample << endl;

	// print test for mathematical functions
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << m << endl;

	//	a_sample.get_data().print();

	return 0;
}

void sample::print() {
  // prints sample vector to an output stream
  cout << "<" << numbers.size() << ": ";
   for(vector<long double>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       cout << *i << " ";
  }
   cout << ">" << endl;
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

long double sample::range(sample a_sample) {
  long double max = a_sample.maximum();
  long double min = a_sample.minimum();
  long double range = max - min;

  return range;
}

long double sample::midrange(sample a_sample) {
  long double max = a_sample.maximum();
  long double min = a_sample.minimum();
  long double midrange = (max + min)/2;

  return midrange;
}
