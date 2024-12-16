// mul.cpp

#include <iostream>
using namespace std;

extern "C" int get();
int main() {
	int n = get();
	int m = get();
	cout << "곱은 " << n * m << "입니다" << endl;
}

// 다음은 C코드로서 get.c 파일에 저장되어있다. 
// get()함수를 호출하여 두 정수를 키보드로부터 입력받아 아래 실행화면과 같이 곱을 출력하는 프로그램을 mul.cpp 파일에 저장하고,
// get.c와 mul.cpp 파일로 구성되는 프로젝트를 완성하라.

// 컴파일 위해.
// (base) goseoyeong@goseoyeong-ui-MacBookAir 실습 % gcc -c 14-4get.c -o 14-4get.o
// (base) goseoyeong@goseoyeong-ui-MacBookAir 실습 % clang++ -c 14-4mul.cpp -o 14-4mul.o
// (base) goseoyeong@goseoyeong-ui-MacBookAir 실습 % clang++ 14-4get.o 14-4mul.o -o program
// ./program
