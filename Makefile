.POSIX:
include config.mk

BIN = ln
OBJ = main.o

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LN_LDFLAGS) -o $@ $(OBJ) $(LN_LDLIBS)

clean:
	rm -f $(BIN) *.o

.SUFFIXES: .c .o
.c.o:
	$(CC) $(LN_CFLAGS) -c $<
