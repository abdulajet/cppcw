#include <iostream>
#include "samplet.h"


using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty samplet object - initialise with a vector once
	 * you have defined the samplet constructor that takes a
	 * vector
	 */
  vector<double> i = {1, 3, 6, 8, 4, 22};
  vector<float> d = {1.0, 3.0, 6.1, 8.2, 4.0, 22.5};

  samplet<int> a_samplet(i); // = { 7, 11, 2, 13, 3, 5 };

	cout << "\tBefore city_test_generic()\n";
	 city_test_generic(a_samplet);
	cout << "\tAfter city_test_generic()\n";
	/* Place your code for testing samplet after this line. */

	samplet<float> s(d);

        cout << s << endl;
	cout << s.minimum() << endl;
	cout << s.maximum() << endl;

	return 0;
}