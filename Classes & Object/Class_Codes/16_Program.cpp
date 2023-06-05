
#include <iostream>

class Demo {

	public :

		int x = 10;
		static int y;

		void fun();
};

int Demo::y = 20;

void Demo::fun() {

	std::cout << "X = " << x << std::endl;
	std::cout << "Y = " << y << std::endl;
}

int main() {

	Demo obj1;
	Demo obj2;

	obj1.fun();
	obj2.fun();

	obj1.x = 50;
	obj1.y = 100;

	return 0;
}
