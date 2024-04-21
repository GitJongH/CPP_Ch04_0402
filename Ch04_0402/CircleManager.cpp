/*
#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������
	string name; // ���� �̸�
public:
	// �̸��� ������ ����
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
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����, ����ڷκ��� �Է� �Ϸ�
	~CircleManager();
	void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	int radius;
	string name;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;

	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (name == p[i].getName()) {
			cout << name << "�� ������ " << p[i].getArea() << endl;
			return;
		}
	}

	cout << name << "�� �����ϴ�.";
}

void CircleManager::searchByArea() {
	int area = 0, count = 0;

	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			count++;
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
	cout << "������ " << area << "���� ū ���� " << count << "�� �Դϴ�." << endl;
}

int main() {
	CircleManager* pCM;
	cout << "���� ���� >> ";
	int n;
	cin >> n;

	pCM = new CircleManager(n);
	pCM->searchByName();
	pCM->searchByArea();

	delete pCM;
}
*/