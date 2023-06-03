
#include <iostream>

class Demo {

	private :

		int x = 10;

	public :

		int y = 20;
	
	protected :

		int z = 30;

};

int main() {

	Demo obj;

	std::cout << obj.x << std::endl;
	std::cout << obj.y << std::endl;
	std::cout << obj.z << std::endl;

	return 0;
}

/* error: ‘int Demo::x’ is private within this context
   24 |  std::cout << obj.x << std::endl;
      |                   ^
12_Program.cpp:8:7: note: declared private here
    8 |   int x = 10;
      |       ^
12_Program.cpp:26:19: error: ‘int Demo::z’ is protected within this context
   26 |  std::cout << obj.z << std::endl;
      |                   ^
12_Program.cpp:16:7: note: declared protected here
   16 |   int z = 30;
*/
