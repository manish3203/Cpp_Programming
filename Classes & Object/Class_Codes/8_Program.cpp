
#include <iostream>

class Demo {

	int x = 10;
	static int y;

	public :

	void fun() {

		std::cout << x << std::endl;
		std::cout << y << std::endl;
	}
};
int main() {

	Demo obj;
	obj.fun();

	return 0;
}

/* (.text._ZN4Demo3funEv[_ZN4Demo3funEv]+0x3b): undefined reference to `Demo::y'
collect2: error: ld returned 1 exit status
*/
