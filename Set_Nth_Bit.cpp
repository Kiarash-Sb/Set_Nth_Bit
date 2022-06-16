#include <iostream>
using namespace std;
int main()
{
	int num, n;
	cout << "Enter a number :	";
	cin >> num;
	cout << "Enter bit number :	";
	cin >> n;
	cout << "Bit set successfully!\n";
	cout << "Answer :	" << (num | (1<< (n-1)));
}
