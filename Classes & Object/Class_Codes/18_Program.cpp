//No Argument Constructor

#include <iostream>
class Demo {

	public :

		Demo() {

			std::cout << "In Constructor" << std::endl;
		}
		Demo(int x) {

			std::cout << "Para Constructor" << std::endl;
		}
};

int main() {

	Demo obj1;

	Demo *obj2 = new Demo();

	Demo obj3(10);

	Demo *obj4 = new Demo(20);

	Demo obj5{};
}
