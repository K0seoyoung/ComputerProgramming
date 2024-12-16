#include <iostream>
using namespace std;

istream& pos(istream& strm) {
	cout << "위치는? ";
	return strm;
}

int main() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}

// pos 조작자를 작성하라.
