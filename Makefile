a.out: indx.o strstr.o skorowidz.o
	$(CC) $^

indx.o: strstr.h skorowidz.h
skorowidz.o: strstr.h skorowidz.h
strstr.o: strstr.h
