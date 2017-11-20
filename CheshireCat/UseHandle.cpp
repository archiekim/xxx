//
#include "Handle.h"
#include <MyDebug.h>

int main()
{
   Handle u;
   u.initialize();
   PR(u.read());
   u.change(1);
   PR(u.read());
   u.cleanup();
}
