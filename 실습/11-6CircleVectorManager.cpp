// vector를 이용하여 아래 Circle class 객체 삽입, 삭제하는 프로그램 작성
// 삭제 시에는 이름이 같은 모든 원을 삭제한다.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "11-6Circle.h"
#include "11-6UI.h"
#include "11-6CircleVectorManager.h"

CircleVectorManager::CircleVectorManager() { }
CircleVectorManager::~CircleVectorManager() { }

void CircleVectorManager::edit() {
	int radius;
	string name;

	UI::getCircle(radius, name);
	v.push_back(new Circle(radius, name));
}

void CircleVectorManager::remove() {
	string name;
	name = UI::getCircleName();
	
	vector<Circle*>::iterator it = v.begin();
	while(it != v.end()) {
		Circle *p = *it;
		if(p->getName() == name) {
			it = v.erase(it);
			delete p;
		}
		else {
			it++;
		}
	}
}
void CircleVectorManager::paint() {
	vector<Circle*>::iterator it;
	for(it=v.begin(); it != v.end(); it++) {
		Circle *p = *it;
		UI::println(p->getName());
	}
	UI::println();
}

void CircleVectorManager::run() {
	UI::println("원을 삽입하고 삭제하는 프로그램입니다.");
	while(true) {
		int menu = UI::getMainMenu();
		switch(menu) {
			case EDIT: // 삽입
				edit(); break;
			case REMOVE: // 삭제
				remove(); break;
			case PAINT: // 다시 그리기
				paint(); break;
			case EXIT: // 끝내기
				return;
			default:
				UI::println("명령 선택 오류");
		}
	}
}
