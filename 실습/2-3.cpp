// 다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라.
/*
//비주얼 스튜디오에서 scanf로 인한 오류를 막기 위한 선언문
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main_C() { // 문제에 주어진 코드
	int k, n=0;
	int sum=0;
	printf("끝 수를 입력하세요>>");
	scanf("%d", &n);
	for(k=1; k<=n; k++) {
		sum += k;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum);
	return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
	int k;
	int n = 0;
	int sum = 0;
	
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	
	for(k = 1;k <=n; k++)
		sum += k;
	cout << "1에서 " << n <<"까지의 합은 " <<sum <<"입니다" <<endl;
	return 0;
}
