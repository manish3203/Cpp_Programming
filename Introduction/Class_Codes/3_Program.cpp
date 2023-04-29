
#include <iostream>
using namespace std;

int main() {

	int cout = 10;

	cout << cout << endl;
	return 0;
}

/*3_Program.cpp: In function ‘int main()’:
3_Program.cpp:9:15: error: invalid operands of types ‘int’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’
    9 |  cout << cout << endl;
*/
