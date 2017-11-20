/*
 * Handle.h
 *
 *  Created on: Nov 20, 2017
 *      Author: archiekim
 */

#ifndef HANDLE_H_
#define HANDLE_H_

class Handle
{
   struct Cheshire;
   Cheshire* smile;

public:
   void initialize();
   void cleanup();
   int read();
   void change(int);
};

#endif /* HANDLE_H_ */
