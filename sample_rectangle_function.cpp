// sample_rectangle_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//int mohit(int x, int y) {
//	int p;
//	p = 2 *(x + y);
//	return p;
//}
//int masahat(int x, int y) {
//	int s;
//	s = x * y;
//	return s;
//}

void mohit(int x, int y) {
	//int p;
	/*p = 2 * (x + y);
	cout << "p=" << p;*/
	cout << "p=" << 2 * (x + y);

}
void masaht(int x,int y) {
	//int s;
	//s = x * y;
	//cout << "s=" << s;
	cout << "s=" << x * y;

}

int main()
{
	//int x, y;
	//int s, p;
	//cin >> x >> y;
	//p = mohit(x, y);
	//s = masahat(x, y);

 //  cout << "s="<<s<<"p="<<p<<endl;
	int x, y;
	cin >> x >> y;
	mohit(x, y);
	masaht(x, y);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
