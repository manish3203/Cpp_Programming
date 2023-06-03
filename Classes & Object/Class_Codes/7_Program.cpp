
#include <iostream>

class Demo {

	int x = 10;

	void fun() {

		std::cout << x << std::endl;
	}
};

int main() {

	Demo obj;
	obj.fun();

	return 0;
}

/* error: ‘void Demo::fun()’ is private within this context
   17 |  obj.fun();
      |          ^
7_Program.cpp:8:7: note: declared private here
    8 |  void fun() {
*/
