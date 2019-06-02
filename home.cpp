#include <string>
#include <iostream>
using namespace std;

int main() {
  int x;
  int num = 5;
  string answer;

  for (x = 0; x < num; x++) {
    cout << "Hello World" << endl;
    cout << "Welcome to Git" << endl;
	cout << "Goodbye" << endl;
	}

	do
	{
		cout << "Whats your favorite color? ";
		cin >> answer; 
		cout << "You said: " << answer << endl;
		x++;
	} while (x < num);
}
