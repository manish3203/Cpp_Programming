
#include <iostream>

class Demo {

	public :

		Demo() {

			std::cout << "No-args Constructor" << std::endl;
		}
		Demo(int x) {

			std::cout << "Para Constructor" << std::endl;
		}
		Demo(Demo &xyz) {

			std::cout << "Copy Constructor" << std::endl;
		}
};

int main() {

	Demo obj1;
	Demo obj2(10);
	Demo obj3(obj1);
	Demo obj4 = obj1;

	return 0;
}
