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
 * Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * localtime benchmark
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "libmicro.h"

int
benchmark_init()
{
	(void) sprintf(lm_usage, "notes: measures localtime_r()\n");
	lm_tsdsize = 0;

	return (0);
}

/*ARGSUSED*/
int
benchmark(void *tsd, result_t *res)
{
	struct tm		tms;
	static time_t		clock1 = 0L;

	(void) localtime_r(&clock1, &tms);

	return (0);
}
