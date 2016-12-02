#include <iostream>
#include "samplet.h"

using namespace std;

int main_test(int argc, char *argv[]) {
	/* an empty samplet object - initialise with a vector once
	 * you have defined the samplet constructor that takes a
	 * vector
	 */


  vector<float> d = {1.0, 3.0, 6.1, 8.2, 4.0, 22.5};
  vector<int> i = {2, 3, 4, 5, 6};
  
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
