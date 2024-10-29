/*
	제일 난이도 있는 문제
	일단 싹 다 갈아 엎음.. 소멸자를 굳이 안 만들어도 되나?나중에 다시 봐야할듯
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>  // 벡터 사용을 위해 추가

using namespace std;

class Random {
public:
    static int nextInRange(int low, int high); // low와 high 사이의 랜덤 정수를 리턴한다.
};

int Random::nextInRange(int low, int high) {
    int range = (high - low) + 1;
    return low + (rand() % range);  // low와 high 사이의 랜덤 정수를 리턴한다.
}

class Rectangle {
private:
    static int numOfRectangles;
    int value; // 랜덤하게 생성된 사각형의 값
public:
    Rectangle(); // 생성된 사각형의 개수 증가
    ~Rectangle() { numOfRectangles--; } // 생성된 사각형의 개수 감소
    void setValue(int value) { this->value = value; }
    int getValue() const { return value; }
    static int getNumOfRectangles() { return numOfRectangles; }
};

int Rectangle::numOfRectangles = 0; // 정적 변수 초기화

Rectangle::Rectangle() {
    value = 0;
    numOfRectangles++;
}

int main() {
    srand(time(0)); // 난수 생성 시드 초기화

    // 사각형 객체 생성
    Rectangle rect;
    cout << "생성된 사각형의 개수 = " << Rectangle::getNumOfRectangles() << endl;

    int numOfRectangles = Rectangle::getNumOfRectangles();
    vector<int> random_nums; // 랜덤 숫자들을 저장할 벡터
    int evenSum = 0; // 짝수 값들의 합

    for (int i = 0; i < numOfRectangles; i++) {
        int randomValue = Random::nextInRange(1, 40); // 1부터 40 사이의 랜덤 숫자
        random_nums.push_back(randomValue); // 벡터에 추가

        cout << i + 1 << " : " << randomValue << endl;

        if (randomValue % 2 == 0) { // 짝수라면
            evenSum += randomValue; // 짝수 값들의 합에 추가
        }
    }

    cout << "짝수 값들의 합은 " << evenSum << endl;

    // Rectangle 객체 소멸
    cout << "소멸 후 사각형의 개수 = " << Rectangle::getNumOfRectangles() - 1 << endl; 

    return 0;
}

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// class Random {
// public:
// 	static int nextInRange(int low, int high); // low와 high 사이의 랜덤 정수를 리턴한다.
// };

// int Random::nextInRange(int low, int high) {
// 	int range = (high - low) + 1;
// 	return low + (rand() % range);  //low와 high 사이의 랜덤 정수를 리턴한다.
// }

// class Rectangle {
// private:
// 	static int numOfRectangles;
// 	int value;      // 랜덤하게 생성된 사각형의 값
// public:
// 	Rectangle(); // 생성된 사각형의 개수 증가;
// 	~Rectangle() { numOfRectangles--; } // 생성된 사각형의 개수 감소
// 	void setValue(int value) { this->value = value; }
// 	int getValue() { return value; }
// 	static int getNumOfRectangles() { return numOfRectangles; }
// };

// Rectangle::Rectangle() {
// 	value = 0;
// 	numOfRectangles++;
// }
// int Rectangle::numOfRectangles = 0; // 0으로 초기화

// int main() {
// 	// 난수 생성 시드 초기화
// 	srand(time(0));

// // 여기 아래에 프로그램을 작성하여 실행화면과 같이 출력되도록 프로그램 하시오.
// 	Rectangle rect;
// 	cout << "생성된 사각형의 개수 = " << Rectangle::getNumOfRectangles() << endl;

// 	int numOfRectangles = Rectangle::getNumOfRectangles();
// 	//???
// 	vector<int> random_nums;
// 	//짝수들의 합
// 	int evenSum = 0;

// 	for(int i = 0; i < numOfRectangles; i++){
// 		int randomValue = Random::nextInRange(1,40);
// 		random_nums.push_back(randomValue);				//vector에 추가?

// 		cout << i+1 <<" : " << randomValue << endl;

// 		if (randomValue % 2 == 0){
// 			evenSum += randomValue;
// 		}
// 	}

// 	cout << "짝수 값 : ";
// 	random_nums;
// 	cout << "짝수 값들의 합은 " << evenSum << endl;
	
// 	~rect;
// 	cout << "소멸 후 사각형의 개수 = " << Rectangle::getNumOfRectangles()-1 << endl; 
// 	return 0;
// }
