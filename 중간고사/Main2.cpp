/*
	문자열의 길이를 구하려면 strlen라는 함수를 써야한다.
	return 잘하기 ???
	for문에서 문자열을 다 찾고 나서 for문 밖에서 문자열이 없다면 거기에서 문자를 찾을 수 없습니다.를 해야함
	
	교수님 팁:
	find함수는 return 값만 받게 하고 출력은 main()함수로 하도록 만든다.
	그래서 참조 변수를 따로 만들어서 출력할 때에도 그렇게 하도록 한다.
	find 함수 안에 출력까지 다 집어 넣을 필요 없음..

	code version problem : Libc++ only supports AppleClang 15 and later
	cin 이 안됨 
*/
#include <iostream>
using namespace std;

// 문자열에서 특정 문자를 찾아 그 인덱스를 참조로 반환하는 함수
// 여기 아래에 int& find(char str[], char target)를 구현하시오
int& find(char str[], char target){
	
	//인덱스 저장하는 변수
	static int target_index = -1;
	//문자열의 길이를 구하는 함수
	int length = strlen(str);

	for(int i = 0; i < length; i++){
		if(str[i] == target){
			target_index = i;
			str[i] = 'Z';
			return target_index;
		}
	}

	//문자가 없을 때
	return target_index;
}

int main() {
    char hufs[] = "Hankuk University of Foreign Studies";
	// 여기 아래에 실행 화면과 같이 동작하도록 코드를 작성하여 완성하시오.
    char target;
    cout << "문자열에서 찾을 문자를 입력하세요: ";
	// target = 'u';
	target = 'x';
    // cin >> target;

	//참조 변수 a를 만들어서 하기
	int& a = find(hufs, target);


    if (a != -1){
		cout << endl << "'"<<target<<"' 문자는 인덱스 "<< a <<"에서 발견되었습니다."<<endl;
		cout << "수정된 문자열: "<< hufs <<endl;
	}

	//문자가 없을 때 
	else{
		cout << endl << "'"<< target <<"' 문자를 찾을 수 없습니다."<<endl;
	}

    return 0;
}
