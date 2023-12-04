.POSIX:
CC = cc

BIN = ln
OBJ = ln.o

LN_CFLAGS = -std=c99 -D_POSIX_C_SOURCE=200809L $(CFLAGS)

all: $(BIN)
$(BIN): $(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean:
	rm -f $(BIN) *.o

.SUFFIXES: .c .o
.c.o:
	$(CC) $(LN_CFLAGS) -c $<
