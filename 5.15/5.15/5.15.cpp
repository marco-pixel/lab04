

#include <iostream>
using namespace std;


int main()
{
	int i;
	int n;
	int T;


	cout << "introduzca tamaño" << endl;
	cin >> T;
	cout << endl;
	cout << "(a)" << endl;
	for (i = 1; i <= T; i++) {
		for (n = 1; i >= n; n++)
			cout << "*";
		cout << "\n";

	}
	cout << "(b)" << endl;
	for (i = T; i >= 1; i--) {
		for (n = 1; i >= n; n++)
			cout << "*";
		cout << "\n";

	}
	cout << "(c)" << endl;
	for (i = T; i >= 1; i--) {
		for (n = 1; T-i >= n; n++)
			cout << " ";
		for (n = 1; i >= n; n++)
			cout << "*";
		cout << "\n";

	}
	cout << "(d)" << endl;
	for (i = 1; i <= T; i++) {
		for (n = 1; T - i >= n; n++)
			cout << " ";
		for (n = T; T-i < n; n--)
			cout << "*";
		cout << "\n";

	}
	return 0;
}

