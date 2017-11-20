/*
 * Stack.h
 *
 *  Created on: Nov 20, 2017
 *      Author: archiekim
 */

#ifndef STACK_H_
#define STACK_H_

class Stack
{
   struct Link
   {
      void* data;
      Link* next;
      void initialize(void* dat, Link* nxt);
   }* head;

public:
   void initialize();
   void cleanup();
   void push(void* dat);
   void* peek();
   void* pop();
};


#endif /* STACK_H_ */
