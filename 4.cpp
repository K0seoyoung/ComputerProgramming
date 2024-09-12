// 중식당의 주문과정을 c++프로그램으로 작성해보자.
// 다음 실행과 같이 메뉴와 사람 수를 입력받고 출력하면 된다라
// 잘못된 입력을 가려내는 부분도 코드 (boolcheckInputError(){})에 추가하라.

#include <iostream>
using namespace std;

bool checkInputError() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "입력 오류" << endl;
		return true;  // 오류 있음
	}
	return false;  // 오류 없음
}

int main() {
	int i, n;
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	do {
		// 메뉴 입력 받기
		do {
			cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
			cin >> i;

			if (checkInputError() || (i < 1 || i > 4)) {
				cout << "다시 주문하세요!!" << endl;
				continue;
			}
			// 입력이 정상적인 경우
			if (i == 4) {
				cout << "오늘 영업은 끝났습니다." << endl;
				return 0; // 프로그램 종료
			}
			break;
		} while (true);

		// 인분 입력 받기
		do {
			cout << "몇 인분?";
			cin >> n;

			if (checkInputError() || n <= 0) {
				cout << "올바른 인분 수를 입력하세요!" << endl;
				continue;
			}
			break;
		} while (true);

		if (i == 1)
			cout << "짬뽕 " << n << "인분 나왔습니다." << endl;
		else if (i == 2)
			cout << "짜장 " << n << "인분 나왔습니다." << endl;
		else
			cout << "군만두 " << n << "인분 나왔습니다." << endl;

	} while (true);

	return 0;
}
