/*
** Copyright 2011 Carnegie Mellon University
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**    http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
/*!
  @file Xselect.c
  @brief Impliments XIA version of select
*/


#include <errno.h>
#include <sys/time.h>
#include <sys/types.h>
#include "Xsocket.h"
#include "Xinit.h"
#include "Xutil.h"
//#include "dagaddr.hpp"


int Xselect(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout)
{
	int rc;

	rc = select(nfds, readfds, writefds, exceptfds, timeout);

	if (rc <= 0)
		return rc;

	return rc;
}