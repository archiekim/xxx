/*
 * Stash.h
 *
 *  Created on: Nov 18, 2017
 *      Author: archiekim
 */

#ifndef STASH_H_
#define STASH_H_

class Stash
{
   int size;  // unit size
   int quantity;  // how many elements
   int next;  // next empty place
   unsigned char* storage;

   void inflate(int increase);

public:
   void initialize(int sz);
   void cleanup();
   int add(const void* element);
   void* fetch(int idx);
   int count() const;
};

#endif /* STASH_H_ */
