#include <Arduino.h>

class terminal{

public:

terminal();


bool verCommand(const char *cmd, int len); 
// Читает из буфера и сравнивает с символьной константой

int verCommand(const char *cmd, int len, int count); 
// Читает из буфера и сравнивает с символьной константой и возвращает ее номер
// Константы надо передать подряд одной строкой, они должны быть одинаковой длинны

void cleanBuf();
// Чистит входной буфер 

bool waitBuf(uint32_t timeout);
// Ждет поступления данных в буфер
//TRUE - буфер доступен, FALSE - таймаут превышен

bool parseCommand(const char startCommand, const char paramChar, const char praramLinkValue, char * command, argm args);
// Читает команду из буфера до символа переноса строки и парсит команду
// на ее имя и лист аргументов вида Key-Value

protected:


};