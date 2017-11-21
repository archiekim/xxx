//
#include <iostream>
#include <fstream>
#include <MyDebug.h>
#include "Stash.h"
using namespace std;

int main()
{
   Stash intStash(sizeof(int));
   for (int i = 0; i < 10; i++)
      PR(intStash.add(&i));
   for (int i = 0; i < intStash.count(); i++)
      cout << *(int*)intStash.fetch(i) << endl;

   const int bufSize = 80;
   Stash strStash(sizeof(char) * bufSize);
   string line;
   ifstream in("Stash.cpp");
   assure(in, "Stash.cpp");
   while (getline(in, line))
      PR(strStash.add(line.c_str()));

   int idx = 0;
   while (char* str = (char*)strStash.fetch(idx++))
      cout << idx << ": " << str << endl;

   switch (int iii = 36)
   {
      case 36:
         cout << "*****" << iii << "*****" << endl;
         break;
      default:
         cout << 99 << endl;
         break;
   }
}
