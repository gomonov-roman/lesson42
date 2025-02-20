#include "test.h"

void test01() {


	int matrix[][N]{
	{1,2,3,4,5},
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 } };

	string expected = 0;
	print(matrix, expected, "test01");

	string msg = expected == actual ? "PASS(green)" : "FAIL(red)";


	cout << "test01 - " << msg << endl;
	cout << "------------------------------" << endl;
}
