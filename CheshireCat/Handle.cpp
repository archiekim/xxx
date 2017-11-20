/*
 * Handle.cpp
 *
 *  Created on: Nov 20, 2017
 *      Author: archiekim
 */

#include "Handle.h"
#include <MyDebug.h>

struct Handle::Cheshire
{
   int i;
};
void Handle::initialize()
{
   smile = new Cheshire;
   smile->i = 0;
}
void Handle::cleanup()
{
   delete smile;
}
int Handle::read()
{
   return smile->i;
}
void Handle::change(int ii)
{
   smile->i = ii;
}
