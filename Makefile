

experimentp: experimentp.o array_util.o sorts.o 
	gcc  -Wall experimentp.o  array_util.o sorts.o -o experimentp
experimentp.o: experimentp.c sorts.h array_util.h
	gcc -Wall -c experimentp.c

sorts.o: sorts.c 
	gcc  -Wall -c sorts.c

array_util.o: array_util.c
	gcc -Wall -c array_util.c
