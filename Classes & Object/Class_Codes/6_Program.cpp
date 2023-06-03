
#include <iostream>

int& fun(int x) {

	int y = x;

	return y;
}
int main() {

	int a = 50;
	
	//fun(a);


	int ret = fun(a);

	std::cout << ret << std::endl;

	return 0;
}

/*  warning: reference to local variable ‘y’ returned [-Wreturn-local-addr]
    8 |  return y;
      |         ^
6_Program.cpp:6:6: note: declared here
    6 |  int y = x;

    Segmentation Falut

*/
