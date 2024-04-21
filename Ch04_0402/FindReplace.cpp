/*
#include <iostream>
#include <string>
using namespace std;
// replace : 함수를 호출하는 문자열의 index위치에서 len 길이까지의 범위를 매개변수로 들어온 str 전체로 대체 하는 함수
// find : 매개변수로 들어온 문자열과, 내 문자열중에 일치하는 게 있는지 확인하는 함수
int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore(); // & 뒤에 따라오는 <Enter> 키를 제거하기 위한 코드
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}

	cout << s << endl;
}
*/