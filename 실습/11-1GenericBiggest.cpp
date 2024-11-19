// 배열을 받아 가장 큰 값을 리턴하는 제네릭 함수 biggest()를 작성하라.
// 또한 main() 함수를 작성하여 biggest()를 호출하는 몇 가지 사례를 보여라

//제가 쓴 답은 다음과 같습니다.
#include <iostream>
using namespace std;


// 여기 아래에 코드를 작성하시오.
template <typename T>
T biggest(T arr[], int size){
    if (size <= 0){
        throw invalid_argument("배열의 크기는 양수여야 합니다.");
    }
    T max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main() {
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl; // 5는 배열 x의 크기
	double y[] = {6.4, 3.3, -200.6, 7.7, 8.8, 20.3};
	cout << biggest(y, 6); // 6는 배열 y의 크기
}
