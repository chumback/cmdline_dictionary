dict:main.o lookupword.o
#default compiler is called with CC
	$(CC) -o $@ $^

main.o:lookupword.h
lookupword.o:lookupword.h

clean:
	rm -f *.o
	rm -f dict
#make looks at files, clean is not a file so make may not work all the time so we use .PHONY to trick it

.PHONY: clean