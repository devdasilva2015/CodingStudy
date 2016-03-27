////#include <stdio.h>
//#include <bitset>
//#include <iostream>
//
//
//int main() {
//	using namespace std;
//
//	unsigned short short1 = 4;
//
//	bitset<16> bitset1{ short1 };   // the bitset representation of 4
//
//	cout << bitset1 << endl;  // 0000000000000100
//
//	unsigned short short2 = short1 << 1;     // 4 left-shifted by 1 = 8
//
//	bitset<16> bitset2{ short2 };
//
//	cout << bitset2 << endl;  // 0000000000001000
//
//	unsigned short short3 = short1 << 2;     // 4 left-shifted by 2 = 16
//
//	bitset<16> bitset3{ short3 };
//
//	cout << bitset3 << endl;  // 0000000000010000
//}



// bitset_op_bitwiseOR.cpp
// compile with: /EHsc
#include <bitset>
#include <iostream>

int main()
{
	using namespace std;
	bitset<5> b1(7);
	bitset<5> b2(11);
	bitset<4> b3(7);

	cout << "The target bitset b1 is:    ( " << b1 << " )." << endl;
	cout << "The parameter bitset b2 is: ( " << b2 << " )." << endl;
	cout << endl;

	b1 ^= b2;
	cout << "After bitwise exclusive OR combination,\n"
		<< " the target bitset b1 becomes:   ( " << b1 << " )."
		<< endl;

	// Note that the parameter-specified bitset in unchanged
	cout << "The parameter bitset b2 remains: ( " << b2 << " )."
		<< endl;

	// The following would cause an error because the bisets 
	// must be of the same size to be combined
	// b1 |= b3;
}