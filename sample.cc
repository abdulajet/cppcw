#include <iostream>

#include "sample.h"

using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty sample object - initialise with a vector once
	 * you have defined the sample constructor that takes a
	 * vector
	 */

  vector<long double> numbers = {1, 2 ,3 ,4 ,5 ,6};
  sample a_sample(numbers); // = { 7, 11, 2, 13, 3, 5};



	cout << "\tBefore city_test()\n";
	city_test(a_sample);
	cout << "\tAfter city_test()\n";

	/* Place your code for testing sample after this line. */


//	a_sample.print();

	cout << a_sample << endl;

	return 0;
}
