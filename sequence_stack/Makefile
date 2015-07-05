objects=main.o seqstack.o     
main:$(objects)
	c++ -o $@ $^
..c.o:
	c++ -c $<
clean :
	-rm main $(objects)