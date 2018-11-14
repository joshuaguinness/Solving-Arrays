OBJS=main.o linsolve.o gendata.o checkresult.o gettime.o
CFLAGS = -Wall -O3 -g
linsolve: $(OBJS)
	$(CC) -o $@ $?
clean:
	rm $(OBJS) linsolve