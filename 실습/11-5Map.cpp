// map 컨테이너를 이용하여 (이름, 성적)을 저장하고 이름으로 성적을 조회하는 점수관리 프로그램을 만들어라.
// 이름은 빈칸없이 입력하는 것을 원칙으로 한다.

//제가 쓴 코드
#include <iostream>
#include <string>
#include <map>
using namespace std;

class GradeManager {
    string program;
    map<string, int> scoreMap;
    bool checkInputError();
    void insert();
    void search();
public:
    GradeManager(string name);
    void run();
};

// 여기 아래에 코드를 작성하시오.
// GradeManager 클래스의 메서드 구현

// 생성자: 프로그램 이름 초기화
GradeManager::GradeManager(string name) {
    program = name;
}

// 입력 오류를 체크하고 해당 동작을 수행하는 메서드
bool GradeManager::checkInputError() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        insert();
        return true; // 계속 프로그램 실행
    }
    else if (choice == 2) {
        search();
        return true; // 계속 프로그램 실행
    }
    else if (choice == 3) {
        cout << "총 입고된 책은 " << scoreMap.size() << "권입니다." << endl;
        cout << "프로그램을 종료합니다." << endl;
        return false; // 프로그램 종료
    }
    else {
        cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
        return true; // 계속 프로그램 실행
    }
}

// (이름, 성적)을 입력받아 맵에 저장하는 메서드
void GradeManager::insert() {
    string name;
    int score;
    cout << "이름과 점수>> ";
    cin >> name >> score;

    // 이름이 이미 존재하면 점수를 업데이트, 아니면 새로 추가
    scoreMap[name] = score;
}

// 이름을 입력받아 성적을 조회하는 메서드
void GradeManager::search() {
    string name;
    cout << "이름>> ";
    cin >> name;

    auto it = scoreMap.find(name);
    if (it != scoreMap.end()) {
        cout << it->first << "의 점수는 " << it->second << endl;
    }
    else {
        cout << "해당 이름의 점수가 없습니다." << endl;
    }
}

// 프로그램을 실행하는 메서드
void GradeManager::run() {
    cout << "***** 점수관리 프로그램 " << program << "을 시작합니다. *****" << endl;
    while (true) {
        cout << "입력:1, 조회:2, 종료:3 >> ";
        if (!checkInputError()) {
            break; // 프로그램 종료
        }
    }
}

int main() {
    GradeManager gm("HIGH SCORE");
    gm.run();
}
