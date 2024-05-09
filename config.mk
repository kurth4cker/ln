# customize default programs
CC = cc

# customize flags
CFLAGS = -g -pedantic -Wall -Wextra -Werror
LDFLAGS =
LDLIBS =

# don't edit
LN_CFLAGS = -std=c99 -D_POSIX_C_SOURCE=200809L $(CFLAGS)
LN_LDFLAGS = $(LDFLAGS)
LN_LDLIBS = $(LDLIBS)
