SRCS=$(wildcard *.c) $(wildcard *.cpp)
EXES=$(basename $(SRCS))
all:$(EXES)
clean:
    -rm $(EXES)
.PHONY:all clean
