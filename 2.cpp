// 문자열을 2개 입력받고 두 개의 문자열이 같은 지 검사하는 프로그램을 작성하라.

#include <iostream>
using namespace std;
int main() {
	string str;
	string str_same;
	
	cout << "새 암호를 입력하세요>>";
	cin >> str;
	
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str_same;
		
	if (str == str_same)
		cout << "같습니다" << endl;
	else
		cout << "같지 않습니다" << endl;
	
	return 0;
}