/* OCaml promise library
 * http://www.ocsigen.org/lwt
 * Copyright (C) 2009-2010 Jérémie Dimino
 *               2009 Mauricio Fernandez
 *               2010 Pierre Chambart
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, with linking exceptions;
 * either version 2.1 of the License, or (at your option) any later
 * version. See COPYING file for details.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

/* Unix (non-Windows) version of Lwt C stubs.

   Implementing an Lwt C stub can be a bit challenging. See lwt_unix_getcwd_job
   (search for it in your text editor) for a well-documented "model"
   function, including conceptual documentation, practical considerations,
   common pitfalls, etc. */


#include <caml/unixsupport.h>
#include <caml/version.h>
#include <dirent.h>
#include <poll.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/uio.h>
#include <sys/un.h>
#include <sys/wait.h>
#include <unistd.h>

/* +-----------------------------------------------------------------+
   | Unavailable primitives                                          |
   +-----------------------------------------------------------------+ */

LWT_NOT_AVAILABLE1(unix_socketpair_stub)
LWT_NOT_AVAILABLE1(unix_system_job)
LWT_NOT_AVAILABLE4(process_create_process)
LWT_NOT_AVAILABLE1(process_wait_job)
LWT_NOT_AVAILABLE2(process_terminate_process)
