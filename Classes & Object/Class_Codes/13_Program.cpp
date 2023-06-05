//Object Creation II

#include <iostream>

class Player {

	int jerNo = 18;
	std::string Name = "Virat Kohli";

	public :

	void info() {

		std::cout << "Jersy Number = " << jerNo << std::endl;
		std::cout << "Player Name = " << Name << std::endl;
	}
};
int main() {

	Player obj;
	Player *obj1 = new Player();

	obj.info();

	obj1->info();

	return 0;
}
