#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	system("COLOR 0A");
	int cpsmin;
	int cpsmax;
	cout << "CPS Min: " << endl;
	cin >> cpsmin;
	cout << "CPS Max: " << endl;
	cin >> cpsmax;
	int range = cpsmax - cpsmin;
	#define RAND_MAX = range;
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
			Sleep(1000 / (cpsmin + range));
		}
}
