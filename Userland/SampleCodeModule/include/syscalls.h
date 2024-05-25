#ifndef __SYSCALLS_H_
#define __SYSCALLS_H_

#include <stdint.h>

int writeScreen(uint64_t fd, char* buffer, uint64_t len, uint64_t hexColor);
int readScreen(uint64_t fd, char* buffer, uint64_t len);
void sleep(uint64_t secs, uint64_t ms);
int clearScreen();
int printRectangle(uint32_t hexColor);
int setCursorPosition(uint64_t x, uint64_t y);
int beepSound(uint64_t secs);
char* getTime(void);
char* getDate(void);
int zoomIn(void);
int zoomOut(void);

#endif