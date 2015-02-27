/**
* utils for C
*
* Copyright (C) 2015-2020 Rex Lee <duguying2008@gmail.com>
*
* This program is free and opensource software;
* you can redistribute it and/or modify
* it under the terms of the GNU General Public License
*/

#ifndef _PTH_H_
#define _PTH_H_

#include "apis.h"

#if defined _WIN32
 	#include "windows.h"
 	typedef unsigned long int TID;
#else
 	#include <pthread.h>
 	typedef pthread_t TID;
#endif

int
thread_create(
	///thread id
	TID* tid,
	///the routine function
	void* fun,
	///the arguments
	void* arg
	);


#endif
