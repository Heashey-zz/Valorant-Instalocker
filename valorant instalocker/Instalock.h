#pragma once

#include "Main.h"

std::string Resolution;
std::string Character;

void Click() {
	INPUT iNPUT = { 0 };
	iNPUT.type = INPUT_MOUSE;
	iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &iNPUT, sizeof(iNPUT));
	ZeroMemory(&iNPUT, sizeof(iNPUT));
	iNPUT.type = INPUT_MOUSE;
	iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &iNPUT, sizeof(iNPUT));
}

void JettLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Jett_x, Jett_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void SkyeLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Skye)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Skye_x, Skye_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void ReynaLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Reyna)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Reyna_x, Reyna_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void ChamberLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Chamber)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Chamber_x, Chamber_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void YoruLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Yoru)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Yoru_x, Yoru_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void AstraLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Astra)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Astra_x, Astra_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void RazeLock() {
	system("cls");
	Space();
	Log("Press Space to Instalock (Raze)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Raze_x, Raze_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}
