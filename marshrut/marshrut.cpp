#include "marshrut.h"
#include <algorithm>
#include <iostream>
using namespace std;
marshrut::marshrut(int key)
{
 marshrut::key = key;
}
string marshrut::transform(string stroka)
{
 string temp;
 string final;
 while (!(stroka.empty())) {
 for (int i = 0; i < key; i++) {
 if (!(stroka.empty())) {
 temp.push_back(stroka[0]);
 stroka.erase(0, 1);
 }
 }
 reverse(temp.begin(), temp.end());
 final += temp;
 temp = "";
 }
 return final;
 return 0;
}
