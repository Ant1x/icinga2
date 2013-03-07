/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef UNIX_H
#define UNIX_H

#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netdb.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <libgen.h>
#include <syslog.h>
#include <sys/file.h>
#include <sys/wait.h>
#include <poll.h>
#include <glob.h>
#include <ltdl.h>

typedef int SOCKET;
#define INVALID_SOCKET (-1)

#define closesocket close
#define ioctlsocket ioctl

#ifndef MAXPATHLEN
#	define MAXPATHLEN PATH_MAX
#endif /* MAXPATHLEN */

#if HAVE___ATTRIBUTE__
#	define I2_EXPORT __attribute__ ((visibility ("default")))
#	define I2_IMPORT __attribute__ ((visibility ("default")))
#else /* HAVE___ATTRIBUTE__ */
/* default visibility takes care of exported symbols if we don't have __attribute__ */
#	define I2_EXPORT
#	define I2_IMPORT
#endif /* HAVE___ATTRIBUTE__ */
#endif /* UNIX_H */
