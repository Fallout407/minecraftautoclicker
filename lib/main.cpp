#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
	system("COLOR 0A");
	cout << "CPS:" << endl;
	int cps;
	cin >> cps;
	cout << "Autoclicker ready." << endl << "Left Click: R" << endl << "Right Click: F";
	while (1) {
		if (GetAsyncKeyState(0x52)) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		if (GetAsyncKeyState(0x46)) {
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		}
		Sleep(1000 / cps);
	}
}
