// vector를 이용하여 아래 Circle class 객체 삽입, 삭제하는 프로그램 작성
// 삭제 시에는 이름이 같은 모든 원을 삭제한다.

// 내가 쓴 코드
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
    string name; // 이름
    int radius; //반지름
public:
    Circle(int radius, string name) { 
        this->radius = radius;
        this->name = name;
    }
    double getArea() { return 3.14*radius*radius; }
    string getName() { return name; }
};

// 여기 아래에 코드를 작성하시오.
// CircleVectorManager 클래스 정의 및 구현

class CircleVectorManager {
    vector<Circle> circles; // 원 객체들을 저장할 벡터
public:
    void run(); // 프로그램 실행 메서드
private:
    void insert(); // 원 삽입 메서드
    void deleteCircles(); // 원 삭제 메서드
    void viewAll(); // 모든 원 보기 메서드
};

// CircleVectorManager 클래스의 메서드 구현

void CircleVectorManager::run() {
    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
    while (true) {
        int choice;
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        cin >> choice;

        if (choice == 1) {
            insert();
        }
        else if (choice == 2) {
            deleteCircles();
        }
        else if (choice == 3) {
            viewAll();
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
        }
    }
}

void CircleVectorManager::insert() {
    int radius;
    string name;
    cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
    cin >> radius >> name;
    Circle newCircle(radius, name);
    circles.push_back(newCircle);
}

void CircleVectorManager::deleteCircles() {
    string name;
    cout << "삭제하고자 하는 원의 이름은 >> ";
    cin >> name;

    // 이름이 같은 모든 원을 삭제
    // 반복자를 이용하여 안전하게 삭제
    for (auto it = circles.begin(); it != circles.end(); ) {
        if (it->getName() == name) {
            it = circles.erase(it);
        }
        else {
            ++it;
        }
    }
}

void CircleVectorManager::viewAll() {
    for (auto &circle : circles) {
        cout << circle.getName() << endl;
    }
	cout << endl;
}

int main() {
    CircleVectorManager cvm;
    cvm.run();
}
