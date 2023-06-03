#include <iostream>

class Demo {

	int x = 10;

	public :

	void Fun() {

		std::cout << x << std::endl;
	}
};

int main() {

	Demo obj;
	obj.Fun();

	return 0;
}
