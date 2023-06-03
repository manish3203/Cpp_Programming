
#include <iostream>

void fun(int* val) {

	*val = 30;
	std::cout << val << std::endl;
}

int main() {

	int x = 10;
	std::cout << x << std::endl;

	fun(x);
	std::cout << x << std::endl;

	return 0;
}


/* error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
   15 |  fun(x);
      |      ^
      |      |
      |      int
3_Program.cpp:4:15: note:   initializing argument 1 of ‘void fun(int*)’
    4 | void fun(int* val) {
*/
