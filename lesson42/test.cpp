#include "test.h"


void test01() {


	int matrix[][N]{
	{1,2,3,4,5},
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 } };

	int expected = 0;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "PASS(green)" : "FAIL(red)";


	cout << "test01 - " << msg << endl;
	cout << "------------------------------" << endl;
}
