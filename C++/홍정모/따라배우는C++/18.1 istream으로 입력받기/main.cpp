#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

using namespace std;

int main()
{
	//char buf[100];

	//cin.get(buf, 100);
	//cout << cin.gcount() << " " << buf << endl;

	//cin.getline(buf, 100);
	//cout << cin.gcount() << " " << buf << endl;

	//string buf;

	//getline(cin, buf);
	//cout << cin.gcount() << " " << buf << endl;

	char buf[1024];

	cout << (char)cin.peek() << endl;

	cin >> buf;
	cout << buf << endl;
	
	cin.unget();

	cin >> buf;
	cout << buf << endl;

	cin.putback('A');
	cin >> buf;
	cout << buf << endl;
}