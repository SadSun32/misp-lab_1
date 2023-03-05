#pragma once
#include <string>
#include <stdexcept>
using namespace std;
class marshrut
{
private:
 int key;
 string getValidText(string stroka);
public:
 marshrut()=delete;
 marshrut(int key);
 string transform(string stroka);
};
