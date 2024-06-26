// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2024 kurth4cker <kurth4cker@gmail.com>

#include <stdio.h>
#include <unistd.h>

#include "fmt.h"

int
main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s source target\n", argv[0]);
		return 1;
	}

	if (link(argv[1], argv[2]) != 0) {
		fprintf(stderr, "%s: %s -> %s: ", argv[0], argv[1], argv[2]);
		perror(NULL);
		return 1;
	}

	return 0;
}
