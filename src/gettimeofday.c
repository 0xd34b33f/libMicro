/*
 * This file and its contents are supplied under the terms of the
 * Common Development and Distribution License ("CDDL"), version 1.0.
 * You may only use this file in accordance with the terms of version
 * 1.0 of the CDDL.
 *
 * A full copy of the text of the CDDL should have accompanied this
 * source.  A copy of the CDDL is also available via the Internet at
 * http://www.illumos.org/license/CDDL.
 */

/*
 * Copyright 2015 Ryan Zezeski <ryan@zinascii.com>
 * Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * gettimeofday test
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#include "libmicro.h"

int
benchmark_init()
{
	(void) sprintf(lm_usage, "note: measures gettimeofday()");
	lm_tsdsize = 0;
	return (0);
}

/*ARGSUSED*/
int
benchmark(void *tsd, result_t *res)
{
	struct timeval t;

	(void) gettimeofday(&t, NULL);
	return (0);
}
