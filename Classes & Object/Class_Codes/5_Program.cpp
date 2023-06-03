
#include <iostream>

void fun(int x, int y) {

	std::cout << "In Normal Form" << std::endl;
}
void fun(int &ref1, int &ref2) {

	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
int main() {

	int x = 10;
	int y = 20;

	fun(x,y);

	return 0;
}

/* error: call of overloaded ‘fun(int&, int&)’ is ambiguous
   19 |  fun(x,y);
      |         ^
5_Program.cpp:4:6: note: candidate: ‘void fun(int, int)’
    4 | void fun(int x, int y) {
      |      ^~~
5_Program.cpp:8:6: note: candidate: ‘void fun(int&, int&)’
    8 | void fun(int &ref1, int &ref2) {

*/
