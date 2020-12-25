OBJS = 2ch nihongo rupin tt2ch ttnihongo ttrupin

all:: $(OBJS)

clean::
	rm -f $(OBJS) *.exe

CMD = sh cmd.sh ../egg -I.. -L..
CCCMD  = gcc -Wall

2ch: 2ch.c
	$(CMD) -o 2ch 2ch.c

nihongo: nihongo.c
	$(CMD) -o nihongo nihongo.c

rupin: rupin.c
	$(CMD) -o rupin rupin.c

tt2ch: tt2ch.c
	$(CMD) -o tt2ch tt2ch.c

ttnihongo: ttnihongo.c
	$(CMD) -o ttnihongo ttnihongo.c

ttrupin: ttrupin.c
	$(CMD) -o ttrupin ttrupin.c

