#pragma once

#include "Coordinates.h"
#include <windows.h>
#include <iostream>

#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15

void SetColor(unsigned short color) {
	HANDLE con = 0;
	con = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(con, color);
}

void Log(const char* text) {
	SetColor(WHITE);
	std::cout << (" [");
	SetColor(GREEN);
	std::cout << ("+");
	SetColor(WHITE);
	std::cout << ("] ");
	SetColor(WHITE);
	std::cout << (text);
}

void Log2(const char* text) {
	SetColor(WHITE);
	std::cout << (" [");
	SetColor(GREEN);
	std::cout << ("+");
	SetColor(WHITE);
	std::cout << ("] ");
	SetColor(WHITE);
	std::cout << (text) << std::endl;
}

void Space() {
	std::cout << std::endl;
}

void Title() {
	SetConsoleTitleA("Valorant Instalocker - by heashey");
}
