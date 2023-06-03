//Object Creation 

#include <iostream>

class Demo {

	int x = 10;
	int y = 20;

	public :

	Demo {

		std::cout << "In Demo Constructor" << std::endl;
	}
};

int main() {

	Demo *obj = new Demo();    //Memory On HEAP Section

	return 0;
}
