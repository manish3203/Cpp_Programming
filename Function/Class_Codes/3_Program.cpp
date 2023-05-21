
#include <iostream>

void fun(int x, int y){

	std :: cout << "int-int " << x << " " << y << std :: endl;
}
void fun(int x, float y){

	std :: cout << "int-float " << x << " " << y << std :: endl;
}
int main() {

	fun(10.5, 20.5);

	return 0;
}

/* error: call of overloaded ‘fun(double, double)’ is ambiguous
   14 |  fun(10.5, 20.5);
      |                ^
3_Program.cpp:4:6: note: candidate: ‘void fun(int, int)’
    4 | void fun(int x, int y){
      |      ^~~
3_Program.cpp:8:6: note: candidate: ‘void fun(int, float)’
    8 | void fun(int x, float y){
      |      ^~~
*/

//In CPP there are data lost are acceptable
