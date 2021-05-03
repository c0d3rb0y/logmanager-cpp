#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
#define Size 50
#define logName "LOGGER"
using namespace std;
class Log
{

public: enum logTypes {
    MAIN,
    RENDER,
    OTHER
};

      void printLog(string voidinput, logTypes logType) {
          time_t t;
          struct tm* tmp;
          char MY_TIME[Size];
          time(&t);
          tmp = localtime(&t);


          strftime(MY_TIME, sizeof(MY_TIME), "%I:%M:%S", tmp);
          if (logType == MAIN) {
              cout << "(" << MY_TIME << ") " << logName << "//MAIN: " + voidinput + "\n";
          }
          else {
              if (logType == RENDER) {
                  cout << "(" << MY_TIME << ") " << logName << "//RENDER: " + voidinput + "\n";
              }
              else {
                  if (logType == OTHER) {
                      cout << "(" << MY_TIME << ") " << logName << "//OTHER: " + voidinput + "\n";
                  }
              }
          }
      }

};


