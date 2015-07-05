objects=maze_path.o 
main:$(objects)
	c++ -o $@ $^
..c.o:
	c++ -c $<
clean :
	-rm maze_path $(objects)