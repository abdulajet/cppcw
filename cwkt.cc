#include <iostream>
#include "samplet.h"


using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty samplet object - initialise with a vector once
	 * you have defined the samplet constructor that takes a
	 * vector
	 */

  samplet<int> a_samplet; // = { 7, 11, 2, 13, 3, 5 };

	cout << "\tBefore city_test_generic()\n";
	 city_test_generic(a_samplet);
	cout << "\tAfter city_test_generic()\n";
	/* Place your code for testing samplet after this line. */

	samplet<int> s;

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
