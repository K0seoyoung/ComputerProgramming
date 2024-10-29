/*
	나에게 부족했던 점 : sort함수는 변수가 아니기 때문에 cout할 때 나란히 출력 놉
	sort 함수 아마 시간이 부족해서 못 쓴걸로 추정
	temp = a[i];a[i]=a[j];a[j]=temp; 잊지말자
	또 그 다음에 순서대로 출력하는 것도 잊지말자...
*/
#include <iostream>
using namespace std;

// 두 정수를 내림차순으로 출력하는 함수
void sort(int a, int b); 

// 배열을 내림차순으로 출력하는 함수
void sort(int a[], int size); 

// 여기 아래에 void sort(int a, int b) 함수를 구현 하시오
void sort(int a, int b){
	if (a>b) cout << a << " "<< b;
	else cout << b <<" "<< a;
	cout << endl;
}

// 여기 아래에 void sort(int a[], int size) 함수를 구현 하시오
void sort(int a[], int size){
	for (int i=0; i < size; i++){
		for (int j=0;j<size; j++){
			if(a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	//정렬된 배열을 출력
	for (int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
}


int main() {
    // 두 정수 정렬 테스트
    int x = 5, y = 12;
	
	// 배열 정렬 테스트
    int arr[] = { 3, 19, 12, 5, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

	// sort함수는 void이기 때문에 cout에 같이 출력하면 안됐다. 따로 했어야함..
	cout << "정수 " << x << "와 " << y << "의 정렬 결과:"<<endl;
	cout << "내림차순으로 출력: ";
	sort(x,y);

	cout << "배열의 정렬 결과:"<<endl;
	cout << "내림차순으로 정렬된 배열: ";
	sort(arr,size);

    return 0;
}