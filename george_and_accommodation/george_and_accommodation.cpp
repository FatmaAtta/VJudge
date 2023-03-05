#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, p, q;
	int num = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p >> q;
		if ((q - p) >= 2) {
			num += 1;
		}
	}
	cout << num;
	return 0;
}