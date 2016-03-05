##############

MY_BIN_CFLAGS  = -g -O0
MY_BIN_LDFLAGS = -lstdc++ -lrt -lboost_unit_test_framework

PGM  = testFunctor
INC  = ../includes
OBJS = $(PGM).o ../objs/*.o

.PHONY:	clean run 

all:	$(PGM)

$(PGM).o:	$(PGM).cpp $(INC)/*.hpp
	g++ -Wall -g $(MY_BIN_CFLAGS) -I$(INC) -c $(PGM).cpp -o $@

$(PGM):	$(OBJS)
	g++ -o $@ $(OBJS) $(MY_BIN_LDFLAGS)

clean:
	rm -f  $(PGM) $(PGM).o

test:	$(PGM)
	./$(PGM)
