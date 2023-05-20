//Local Variable Shadowing
//Global Variable Shadowing

#include <iostream>

int main() {

	int x = 10;
	std :: cout << x << std :: endl;
	
	{
		int x = 20;
		std :: cout << x << std :: endl;
		std :: cout << ::x << std :: endl;
		x = 30;
		std :: cout << x << std :: endl;
	}
	std :: cout << x << std :: endl;

}

/* error: ‘::x’ has not been declared
   14 |   std :: cout << ::x << std :: endl;
*/
