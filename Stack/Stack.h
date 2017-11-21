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
      Link(void* dat, Link* nxt);
   }* head;

public:
   Stack();
   ~Stack();
   void push(void* dat);
   void* peek();
   void* pop();
};


#endif /* STACK_H_ */
