#include <windows.h>
#include <time.h>

int main() {
	int x, y;
	x = GetSystemMetrics(SM_CYSCREEN);
	y = GetSystemMetrics(SM_CYSCREEN);
	while (0 == 0) {
		int randx, randy;
		randx = rand() % x + 0;
		randy = rand() % y + 0;
		BitBlt(GetDC(NULL), rand() % x + 0, rand() % y + 0, randx + 200, randy + 200, GetDC(NULL), randx, randy, NOTSRCCOPY);
		Sleep(400);
	}
}
