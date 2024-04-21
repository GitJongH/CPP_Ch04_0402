#include <iostream>
#include <string>
using namespace std;

// Are you happy? I am so happy.

int main() {
	string s;
	int len = 0, count = 0;
	cout << "문자열 입력 >> ";
	getline(cin, s, '\n');

	// #1
	len = s.length();
	/*for (int i = 0; i < len; i++) {
		if (s.at(i) == 'a') {
			count++;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;*/

	// #2
	int index = 0;
	count = 0;
	while (true) {
		index = s.find('a', index);

		if (index == -1) {
			break;
		}
		index++;
		count++;
		
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}