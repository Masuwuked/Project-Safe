CC = gcc 
CDFLAGS = -Wall -Werror -g
LDFLAGS =
TARGET = Psave

$(TARGET): $(TARGET).c
	$(CC) $(CDFLAGS) $(LDFLAGS) -o
$(TARGET) $(TARGET).c

install:
	make
	cp Psave /usr/local/bin/Psave
clean:
	rm =f $(OBJS) $(TARGET)
