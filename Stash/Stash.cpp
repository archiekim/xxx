/*
 * Stash.cpp
 *
 *  Created on: Nov 18, 2017
 *      Author: archiekim
 */
#include <iostream>
#include <cassert>
#include "Stash.h"
using namespace std;

const int increment = 100;
void Stash::initialize(int sz)
{
   size = sz;
   quantity = 0;
   next = 0;
   storage = NULL;
}
void Stash::cleanup()
{
   if (storage != NULL)
   {
      cout << "freeing the memory" << endl;
      delete[] storage;
   }
}
int Stash::add(const void* element)
{
   if (next >= quantity)  // Not enough space
      inflate(increment);

   unsigned char* e = (unsigned char*)element;
   for (int i = 0; i < size; i++)
      storage[next * size + i] = e[i];
   next++;
   return (next - 1);
}
void* Stash::fetch(int idx)
{
   assert(idx >= 0);
   if (idx >= next) return NULL;  // Out of bound
   return &storage[idx * size];
}
int Stash::count() const
{
   return next;
}
void Stash::inflate(int increase)
{
   int newQty = quantity + increase;
   int newByte = newQty * size;
   unsigned char* newStorage = new unsigned char[newByte];
   // copy old data into new storage
   for (int i = 0; i < quantity * size; i++)
      newStorage[i] = storage[i];
   // release old memory
   delete[] storage;
   // update the current object
   quantity = newQty;
   storage = newStorage;
}
