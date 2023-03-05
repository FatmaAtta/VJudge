#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i = 1, num;
	string s;

	while (i <= 26) {
		cin >> num;
		s = s + char(num + 96);
		i++;
	}
	cout << s;
	return 0;
}