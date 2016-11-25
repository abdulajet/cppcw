#include <iostream>

#include "sample.h"


using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty sample object - initialise with a vector once
	 * you have defined the sample constructor that takes a
	 * vector
	 */

  // definition of member variable(s)
  vector<long double> numbers = {7, 11 ,2 ,13 ,3 ,5};


  //creating a new sample object called "a_sample"
  sample a_sample(numbers); // = { 7, 11, 2, 13, 3, 5};
  // long double min = a_sample.minimum();
  // long double max = a_sample.maximum();

	cout << "\tBefore city_test()\n";
	city_test(a_sample);
	cout << "\tAfter city_test()\n";

	/* Place your code for testing sample after this line. */


//	a_sample.print();

	// print vector contents from "a_sample"
	cout << a_sample << endl;


	// print test for mathematical functions
	cout << a_sample.minimum() << endl;
	cout << a_sample.maximum() << endl;
	cout << a_sample.range(a_sample) << endl;
	cout << a_sample.midrange(a_sample) << endl;
	cout << a_sample.mean() << endl;
	cout << a_sample.variance(a_sample) << endl;


	//	a_sample.get_data().print();

	return 0;
}

void sample::print() {
  // prints sample vector to an output stream
  cout << "<" << numbers.size() << ": ";
   for(vector<long double>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       cout << *i << " ";
  }
   cout << ">";
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

long double sample::mean(){
  long double n = numbers.size();
  long double total;
  long double mean;
  for (int i = 0; i < n; ++i){
    total = total + numbers[i]; 
  }
  mean = total/n;
  return mean;
}
/*
long double sample::variance(sample a_sample){
  long double mean = a_sample.mean();
  long double n = numbers.size();
  long double x;
  long double y;
  long double total;
  long double var;
  for (int i =0; i < n; i++){
    x = (numbers[i] - mean);
    y = pow(x, 2);
    total = total + y;
  }
  var = total/n;
  return var;
}
*/

long double sample::variance(sample a_sample){
  long double mean = a_sample.mean();
  long double n = numbers.size();
  long double tmp = 0;

  for (int i = 0; i < n; i++){
    tmp += (numbers[i] - mean)*(numbers[i] - mean);
  }
  return tmp/n;
}
