##############

MY_BIN_CFLAGS  = -g -O0 
MY_BIN_LDFLAGS = -lstdc++ -lrt

PGM  = main
INCS = includes
LIB_OBJS = objs/Wrapper.o objs/Functor.o
OBJS = main.o
SRC  = src

.PHONY:	clean run 

all:	$(PGM)

main.o:	main.cpp $(INCS)/*.hpp
	g++ -Wall -g $(MY_BIN_CFLAGS) -I$(INCS) -c main.cpp -o $@

objs:   
	mkdir objs

objs/Functor.o:	objs $(SRC)/Functor.cpp $(INCS)/Functor.hpp
	g++ -Wall -g $(MY_BIN_CFLAGS) -I$(INCS) -c $(SRC)/Functor.cpp -o $@
	
objs/Wrapper.o:	objs $(SRC)/Wrapper.cpp $(INCS)/Wrapper.hpp
	g++ -Wall -g $(MY_BIN_CFLAGS) -I$(INCS) -c $(SRC)/Wrapper.cpp -o $@
	
$(PGM):	$(OBJS) $(LIB_OBJS)
	g++ -o $@ $(OBJS) $(LIB_OBJS) $(MY_BIN_LDFLAGS)

test:	$(LIB_OBJS)
	make -C test test
		
clean:
	rm -f  $(PGM) $(OBJS) $(LIB_OBJS)
	make -C test clean
		
run:	$(PGM)
	./$(PGM)
