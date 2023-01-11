#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string str ="";
	getline(cin, str);
	if (str == "") {
		cout << "Вы оставили строку пустой";
		return 0;
	}
	string answer;
	for (int i = 0; i < str.length(); i++) {
		char sym = str[i];
		if (count(str.begin(), str.end(), sym) > 1) {
			answer.append(")");
		}
		else
		answer.append("(");
	}
	cout << answer;
	return 0;
}

