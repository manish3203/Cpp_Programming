
#include <iostream>

void fun(int x, int y){

	std :: cout << x << " " << y << std :: endl;
}
	
void fun(int x, float y){

	std :: cout << x << " " << y << std :: endl;
}
	
void fun(float x, float y){

	std :: cout << x << " " << y << std :: endl;
}

int main() {

	fun(10,20);
	fun(10,20.5f);
	fun(10.5f,20.5f);
	fun(10.5,20.5);

	return 0;
	
}

/* error: call of overloaded ‘fun(double, double)’ is ambiguous
   24 |  fun(10.5,20.5);
      |               ^
2_Program.cpp:4:6: note: candidate: ‘void fun(int, int)’
    4 | void fun(int x, int y){
      |      ^~~
2_Program.cpp:9:6: note: candidate: ‘void fun(int, float)’
    9 | void fun(int x, float y){
      |      ^~~
2_Program.cpp:14:6: note: candidate: ‘void fun(float, float)’
   14 | void fun(float x, float y){
      |      ^~~
*/
