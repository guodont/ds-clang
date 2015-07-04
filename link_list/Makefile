objects=main.o linklist.o     
main:$(objects)
	c++ -o $@ $^
..c.o:
	c++ -c $<
clean :
	-rm main $(objects)