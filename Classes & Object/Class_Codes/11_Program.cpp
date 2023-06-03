
#include <iostream>

class Company {

	int count = 5000;

	std::string name = "IBM";

	public :

	Company() {

		std::cout << "In Company Constructor" << std::endl;
	}

	void companyInfo() {

		std::cout << count << std::endl;
		std::cout << name << std::endl;
	}
};

class Employee {

	int empId = 123;
	float empSal = 95.00f;

	public :

	Employee() {

		std::cout << "In Employee Constructor" << std::endl;
	}
	void empInfo() {

		Company obj;
		std::cout << empId << std::endl;
		std::cout << empSal << std::endl;
		obj.companyInfo();
	}
};

int main() {

	Employee *emp = new Employee();

	emp->empInfo();

	return 0;
}
