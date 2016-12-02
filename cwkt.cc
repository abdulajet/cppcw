#include <iostream>
#include "samplet.h"

using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty samplet object - initialise with a vector once
	 * you have defined the samplet constructor that takes a
	 * vector
	 */
  vector<int> i = {1, 3, 6, 8, 4, 22};

  samplet<int> a_samplet(i); // = { 7, 11, 2, 13, 3, 5 };

	cout << "\tBefore city_test_generic()\n";
	city_test_generic(a_samplet);
	cout << "\tAfter city_test_generic()\n";
	/* Place your code for testing samplet after this line. */

        cout << a_samplet << endl;
	cout << a_samplet.minimum() << endl;
	cout << a_samplet.maximum() << endl;

	return 0;
}
