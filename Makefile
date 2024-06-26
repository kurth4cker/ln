.POSIX:
include config.mk

BIN = ln
OBJ = \
      fmt.o \
      main.o

all: $(BIN)

fmt.o: fmt.h
main.o: fmt.h

$(BIN): $(OBJ)
	$(CC) $(LN_LDFLAGS) -o $@ $(OBJ) $(LN_LDLIBS)

clean:
	rm -f $(BIN) *.o

.SUFFIXES: .c .o
.c.o:
	$(CC) $(LN_CFLAGS) -c $<
