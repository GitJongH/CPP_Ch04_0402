/*
#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지음
	string name; // 원의 이름
public:
	// 이름과 반지름 설정
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	CircleManager(int size); // size 크기의 배열을 동적 생성, 사용자로부터 입력 완료
	~CircleManager();
	void searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	int radius;
	string name;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (name == p[i].getName()) {
			cout << name << "의 면적은 " << p[i].getArea() << endl;
			return;
		}
	}

	cout << name << "은 없습니다.";
}

void CircleManager::searchByArea() {
	int area = 0, count = 0;

	cout << "최소 면적은 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			count++;
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << "면적이 " << area << "보다 큰 원은 " << count << "개 입니다." << endl;
}

int main() {
	CircleManager* pCM;
	cout << "원의 개수 >> ";
	int n;
	cin >> n;

	pCM = new CircleManager(n);
	pCM->searchByName();
	pCM->searchByArea();

	delete pCM;
}
*/