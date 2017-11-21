//
#include <iostream>
#include <fstream>
#include <MyDebug.h>
#include "Stack.h"
using namespace std;

struct X
{
   char c;
   int i;
   float f;
   double d;
   X() : c('c') {}
   X(int ii) : c(ii),i(ii),f(ii),d(ii) {}

   friend ostream& operator<<(ostream& os, X& x)
   {
      return os << x.c << ' ' << x.i << ' ' << x.f << ' ' << x.d;
   }
};

void printX(Stack textlines)
{
   string* sp;
   while ((sp = (string*) (textlines.pop())) != 0)
   {
      cout << *sp << endl;
      delete sp;
   }
}

int main(int argc, char* argv[])
{
   requireArgs(argc, 1);  // Filename is argument
   ifstream in(argv[1]);
   assure(in, argv[1]);
   Stack textlines;

   string line;
   while (getline(in, line))
      textlines.push(new string(line));
   printX(textlines);

   X x1(96);
   PR(x1);
   X x2[3] = {X(97), X(98)};
   PR(x2[0]);
   PR(x2[1]);
   PR(x2[2]);
}
