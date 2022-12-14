#pragma once
#include <Windows.h>
#include <iostream>

void cursorVisible(HANDLE hOut, bool isVisible = false);
void dragWindow(int X, int Y);
void resizeWindow(int cols, int lines);
void drawPosition(HANDLE hout, int color, COORD where, COORD what);
void changeFont(HANDLE hOut, int fontSize, const wchar_t* fontName);
void openUrl(LPCSTR url);
void cls(HANDLE hIn);

void drawText(HANDLE hOut, short posY, int windowCols, char* text, int color);
int getLettersInWord(char* text);

bool strcatK(char* destination, int buffSize, const char* source);
bool strcatK(char* destination, int buffSize, const char source);
bool strcatK(char* destination, int buffSize, const int source);
void backspaceText(char* text);

namespace Colors {
    enum Colors {
        COLOR_BLACK = 0,
        COLOR_DARKBLUE = FOREGROUND_BLUE,
        COLOR_DARKGREEN = FOREGROUND_GREEN,
        COLOR_DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
        COLOR_DARKRED = FOREGROUND_RED,
        COLOR_DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
        COLOR_DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
        COLOR_DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
        COLOR_GRAY = FOREGROUND_INTENSITY,
        COLOR_BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
        COLOR_GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
        COLOR_CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
        COLOR_RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
        COLOR_MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
        COLOR_YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
        COLOR_WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    };
}

namespace Keyboard {
    enum Keys {
        KEY_ESC = 27,
    };
}