##
# Project Title
#
# @file
# @version 0.1

wis: wis.c
	$(CC) wis.c -o wis -Wall -Wextra -pedantic -std=c99
clean:
	rm wis
# end
