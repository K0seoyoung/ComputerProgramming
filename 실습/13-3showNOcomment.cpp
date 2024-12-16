#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("/Users/goseoyeong/Documents/hufs/4-2/computerprogrammingPractice/C++/실습/13-3example.cpp");
	if(!fin) {
		cout <<"ShowNoComment.cpp 열기 오류";
		return 0;
	}
	int ch;
	bool found=false;
	while((ch=fin.get()) != EOF) {
		if(ch == '/') {
			if(found == false) 
				found = true; // 슬래시 한개 발견. 주석 시작 설정
			else { // 연속된 두 개의 // 발견
				fin.ignore(100,'\n'); // '\n'을 만날 때까지 100개의 문자 무시
				cout.put('\n');
				found = false; // 주석 제거 완료
			}
		}
		else {
			if(found == true) { // 슬래시가 한 개 별도 문자로 있는 경우
				cout << "/"; // '/'가 발견된 다음 연속된 '/'가 오지 않으면 지난번 '/' 출력
				found = false; // 주석 시작 클리어
			}
			cout.put(ch);
		}
	}

	fin.close();
}

// C++ 소스파일에서 //로 구성된 주석문을 빼고 출력하는 프로그램 작성
// "//"와 같이 문자열 속에 //가 있는 것은 없는 것으로 추정
// .cpp 파일을 하나 준비하여 소스폴더에 넣고 테스트
