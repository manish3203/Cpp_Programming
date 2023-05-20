
#include <iostream>

int main() {

	int x = 10;

	int const *const ptr = &x;

	std :: cout << *ptr << std :: endl;

	ptr = &y;
	*ptr = 30;
}

/* error: ‘y’ was not declared in this scope
   12 |  ptr = &y;
      |         ^
9_Program.cpp:13:7: error: assignment of read-only location ‘*(const int*)ptr’
   13 |  *ptr = 30;
      |  ~~~~~^~~~
*/
