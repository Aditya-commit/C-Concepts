#include <iostream>
using namespace std;

void fun(int i=10 , float a= 3.14);
int main(){
	fun();
	return 0;
}
void fun(int x ,float y){
	cout << x << y;
}