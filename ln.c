/* See file COPYING for licensing rules */

#include <stdio.h>
#include <unistd.h>

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
