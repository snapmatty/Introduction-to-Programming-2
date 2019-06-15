CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = lab11struct.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: LAB11struct.exe clean clean-after

all: LAB11struct.exe

clean:
	$(RM) $(OBJS) LAB11struct.exe

clean-after:
	$(RM) $(OBJS)

LAB11struct.exe: $(OBJS)
	$(CC) -Wall -s -o $@ $(OBJS) $(LIBS)

lab11struct.o: lab11struct.c
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

