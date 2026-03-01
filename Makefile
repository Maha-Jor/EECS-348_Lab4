CC = gcc
CFLAGS = -Wall -Werror -std=c11

all: Football_score Temperature_conversion

Football_score: Football_score.c
	$(CC) $(CFLAGS) -o Football_score Football_score.c

Temperature_conversion: Temperature_conversion.c
	$(CC) $(CFLAGS) -o Temperature_conversion Temperature_conversion.c

clean:
	rm -f Football_score Temperature_conversion

