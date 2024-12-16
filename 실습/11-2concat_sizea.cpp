// 다음 함수는 매개 변수로 주어진 두 개의 int배열을 연결한 새로운 int 배열을 동적 할당 받아 리턴함
// concat가 int배열 뿐만 아니라 다른 타입의 배열도 처리할 수 있도록 일반화
#include <iostream>
using namespace std;

template<class T> 
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for(int i=0; i<sizea; i++)
		p[i] = a[i];
	for(int i=0; i<sizeb; i++)
		p[i+sizea] = b[i];

	return p;
}

int main() {
	// concat() 함수를 int로 구체화하는 경우
	cout << "두 개의 정수 배열을 합칩니다" << endl;

	int x[]={1,2,3};
	int y[]={6,7,8,9};
	int* p = concat(x, 3, y, 4);
	for(int i=0; i<7; i++) 
		cout << p[i] << ' ';

	cout << endl;
	delete [] p;


	// concat() 함수를 char로 구체화하는 경우
	cout << "두 개의 문자 배열을 합칩니다" << endl;

	char a[]={'L', 'o', 'v', 'e'};
	char b[]={'C', '+', '+'};
	char* q = concat(a, 4, b, 3);
	for(int i=0; i<7; i++) 
		cout << q[i] << ' ';

	cout << endl;
	delete [] q;
}
// // 제가 쓴 답은 다음과 같습니다.
// #include <iostream>
// using namespace std;


// // 여기 아래에 코드를 작성하시오.
// template <typename T>
// T* concat(const T* a, int size1, const T* b, int size2){
//     // 두 배열의 크기를 합친 새로운 배열을 동적으로 할당
//     T* result = new T[size1 + size2];
    
//     // 첫 번째 배열의 요소를 복사
//     for(int i = 0; i < size1; ++i){
//         result[i] = a[i];
//     }
    
//     // 두 번째 배열의 요소를 이어서 복사
//     for(int i = 0; i < size2; ++i){
//         result[size1 + i] = b[i];
//     }
    
//     return result; // 새로운 배열의 포인터를 반환
// }


// int main() {
// 	// concat() 함수를 int로 구체화하는 경우
// 	cout << "두 개의 정수 배열을 합칩니다" << endl;

// 	int x[]={1,2,3};
// 	int y[]={6,7,8,9};
// 	int* p = concat(x, 3, y, 4);
// 	for(int i=0; i<7; i++) 
// 		cout << p[i] << ' ';

// 	cout << endl;
// 	delete [] p;

// 	// concat() 함수를 char로 구체화하는 경우
// 	cout << "두 개의 문자 배열을 합칩니다" << endl;

// 	char a[]={'L', 'o', 'v', 'e'};
// 	char b[]={'C', '+', '+'};
// 	char* q = concat(a, 4, b, 3);
// 	for(int i=0; i<7; i++) 
// 		cout << q[i] << ' ';

// 	cout << endl;
// 	delete [] q;
// }