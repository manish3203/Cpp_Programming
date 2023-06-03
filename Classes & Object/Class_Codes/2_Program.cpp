
#include <iostream>

class Player {

	int jerNo = 18;
	std::string name = "Virat";

	public :

	void disp() {

		std::cout << "Jersy Number = " << jerNo << std ::endl;
		std::cout << "Player Name  = " << name << std ::endl;
	}
};

int main() {
	
	Player obj;
	obj.disp();

	return 0;
}
