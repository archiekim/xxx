//
#include <iostream>
#include <fstream>
#include <MyDebug.h>
#include "Stack.h"
using namespace std;

int main(int argc, char* argv[])
{
   requireArgs(argc, 1);  // Filename is argument
   ifstream in(argv[1]);
   assure(in, argv[1]);
   Stack textlines;
   textlines.initialize();

   string line;
   while (getline(in, line))
      textlines.push(new string(line));

   string* sp;
   while ((sp = (string*)textlines.pop()) != 0)
   {
      cout << *sp << endl;
      delete sp;
   }
   textlines.cleanup();
}
