triples: triples.o
	gcc -o triples -g triples.o
triples.o: triples.c
	gcc -g -c -Wall triples.c
clean:
	rm -f *.o triples  
