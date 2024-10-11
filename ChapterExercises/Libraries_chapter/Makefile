CC=gcc
CFLAGS= -Wall -Werror -lm
#DEPS ... dependencies .h files

OBJ= main.o

%.o: %.c  
	$(CC) -c -o $@ $<  	 

main: $(OBJ)  
	$(CC) -o $@  $^ $(CCFLAGS)
#	gcc -o main main.c (-Wall -Werror) = $(CCFLAGS) 


#main.o: main.c
#	$(CC) -o $@ $^ $(CCFLAGS) main.c
clean:
	rm -f *.o
# $@
# $^
#target ... dependecies ...
#		 command ...

# rule(s)
# %.o: %.c $(DEPS) .o(%.o) files depends upon the .c(%.c) files and .h 
# -c generate .o object files 
# -o $@  put the output of the compilation in the file named on the left side of (:),
# $< the first item in the dependency list.
# CFLAGS
# $@ and ^$  means left(L) and right(R) hand side of ( : ) i.e., ( $@: ^$ ) 
# if *.h exist use 
# %.o: %.c $(DEPS) = all *.o depends on all *.c and dependecies *.h files

# https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
