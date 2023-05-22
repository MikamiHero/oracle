SRC_DIR = src
EXECUTABLE = oracle
SRC_FILE = bot.c

SOFLAGS     = -fPIC
DYFLAGS     = -fPIC 
DEBUG_FLAGS = -O0 -g

CFLAGS ?= -O2 -pthread -ldiscord -lcurl

all: oracle

oracle:
	gcc $(SRC_DIR)/$(SRC_FILE) -o $(EXECUTABLE) $(CFLAGS)

clean:
	rm $(EXECUTABLE)