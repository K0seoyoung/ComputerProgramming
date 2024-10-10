// 아래와 같이 원형이 주어진 bigger()를 작성하고 
// 사용자로부터 2개의 정수를 입력받아 큰 값을 출력하는 main()을 작성하라
// bigger()는 인자로 주어진 a,b가 같으면 true, 아니면 false를 리턴
// 큰 수는 big에 전달

#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big){
	if(a==b){
		return true;
	}
	else if(a > b){
		big = a;
		return false;

	}
	else{
		big = b;
		return false;
	}
}
int main() {
	int a,b;
	int big;
	cout << "두 정수를 입력하세요>>";
	cin >> a >> b;
	bool isEqual = bigger(a,b,big);
	
	if (isEqual)
		cout << "same";
	else
		cout << "큰 수는 " << big << endl;
	return 0;
}