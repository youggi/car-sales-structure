SRCS = ui_login_IDPW.o  ui_main.o ui_mypage_memberlist.o  ui_search2.o  ui_test.o ui_login.o ui_login_nouser.o ui_mypage_buyinglist.o  ui_mypage_saleslist.o  ui_search.o search  ui_login_FINDIDPW.o  ui_login_reigster.o  ui_mypage.o ui_mypage_stocklist.o   ui_sort.o

OBJS = $(SRCS:.c=.o)
CFLAGS = -c -o

test: $(OBJS)
        $(CC) -o $@ $(OBJS)

.c.o:$(SRCS)
        $(CC) :$(CFLAGS) $<

clean :
	rm $(OBJS) test

clean :
