//ENRICO X
//CPU SCHEDULING ALGORITHMS (Priority - NP)
#include <stdio.h>
#include <curses.h>
main()
{
_setcursortype(_NOCURSOR);
clrscr();
int x, y=5, z=1, burst[100], burst2=1, gantt[100], gantt2[100];
float pro, wt=0, tat=0;
int lo, di, priority[100], priority2=1,
nodup[100]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, max, sum,
arrival[100]={0, 0, 1, 2, 3, 4, 5, 6, 7, 8};
char menu, proc;

sleep(2);
textcolor(15);
gotoxy(44,13);cprintf("X");
delay(100);
textcolor(0);
gotoxy(44,13);cprintf(" ");
textcolor(15);
gotoxy(42,13);cprintf("O");
delay(100);
textcolor(0);
gotoxy(42,13);cprintf(" ");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(100);
textcolor(0);
gotoxy(41,13);cprintf(" ");
textcolor(15);
gotoxy(40,13);cprintf("I");
delay(100);
textcolor(0);
gotoxy(40,13);cprintf(" ");
textcolor(15);
gotoxy(39,13);cprintf("R");
delay(100);
textcolor(0);
gotoxy(39,13);cprintf(" ");
textcolor(15);
gotoxy(38,13);cprintf("N");
delay(100);
textcolor(0);
gotoxy(38,13);cprintf(" ");
textcolor(15);
gotoxy(37,13);cprintf("E");
delay(100);
textcolor(0);
gotoxy(37,13);cprintf(" ");
delay(100);
textcolor(15);
gotoxy(37,13);cprintf("E");
delay(100);
textcolor(8);
gotoxy(37,13);cprintf("E");
textcolor(15);
gotoxy(38,13);cprintf("N");
delay(100);
textcolor(8);
gotoxy(38,13);cprintf("N");
textcolor(15);
gotoxy(39,13);cprintf("R");
delay(100);
textcolor(8);
gotoxy(39,13);cprintf("R");
textcolor(15);
gotoxy(40,13);cprintf("I");
delay(100);
textcolor(8);
gotoxy(40,13);cprintf("I");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(100);
textcolor(8);
gotoxy(41,13);cprintf("C");
textcolor(15);
gotoxy(42,13);cprintf("O");
delay(100);
textcolor(8);
gotoxy(42,13);cprintf("O");
textcolor(15);
gotoxy(44,13);cprintf("X");
delay(100);
textcolor(8);
gotoxy(44,13);cprintf("X");
sleep(2);
clrscr();
textcolor(15);
gotoxy(28, 13); cprintf("C");
gotoxy(52, 13); cprintf("S");
delay(100);
gotoxy(28, 13); printf(" ");
gotoxy(52, 13); printf(" ");
textcolor(15);
gotoxy(29, 13); cprintf("P");
gotoxy(51, 13); cprintf("M");
delay(100);
gotoxy(29, 13); printf(" ");
gotoxy(51, 13); printf(" ");
textcolor(15);
gotoxy(30, 13); cprintf("U");
gotoxy(50, 13); cprintf("H");
delay(100);
gotoxy(30, 13); printf(" ");
gotoxy(50, 13); printf(" ");
textcolor(15);
gotoxy(32, 13); cprintf("S");
gotoxy(49, 13); cprintf("T");
delay(100);
gotoxy(32, 13); printf(" ");
gotoxy(49, 13); printf(" ");
textcolor(15);
gotoxy(33, 13); cprintf("C");
gotoxy(48, 13); cprintf("I");
delay(100);
gotoxy(33, 13); printf(" ");
gotoxy(48, 13); printf(" ");
textcolor(15);
gotoxy(34, 13); cprintf("H");
gotoxy(47, 13); cprintf("R");
delay(100);
gotoxy(34, 13); printf(" ");
gotoxy(47, 13); printf(" ");
textcolor(15);
gotoxy(35, 13); cprintf("E");
gotoxy(46, 13); cprintf("O");
delay(100);
gotoxy(35, 13); printf(" ");
gotoxy(46, 13); printf(" ");
textcolor(15);
gotoxy(36, 13); cprintf("D");
gotoxy(45, 13); cprintf("G");
delay(100);
gotoxy(36, 13); printf(" ");
gotoxy(45, 13); printf(" ");
textcolor(15);
gotoxy(37, 13); cprintf("U");
gotoxy(44, 13); cprintf("L");
delay(100);
gotoxy(37, 13); printf(" ");
gotoxy(44, 13); printf(" ");
textcolor(15);
gotoxy(38, 13); cprintf("L");
gotoxy(43, 13); cprintf("A");
delay(100);
gotoxy(38, 13); printf(" ");
gotoxy(43, 13); printf(" ");
textcolor(15);
gotoxy(39, 13); cprintf("I");
gotoxy(41, 13); cprintf("G");
delay(100);
gotoxy(39, 13); printf(" ");
gotoxy(41, 13); printf(" ");
gotoxy(40, 13); cprintf("N");
delay(100);
gotoxy(40, 13); printf(" ");
textcolor(8);
gotoxy(40, 13); cprintf("N");
textcolor(15);
gotoxy(39, 13); cprintf("I");
gotoxy(41, 13); cprintf("G");
delay(100);
textcolor(8);
gotoxy(39, 13); cprintf("I");
gotoxy(41, 13); cprintf("G");
textcolor(15);
gotoxy(38, 13); cprintf("L");
gotoxy(43, 13); cprintf("A");
delay(100);
textcolor(8);
gotoxy(38, 13); cprintf("L");
gotoxy(43, 13); cprintf("A");
textcolor(15);
gotoxy(37, 13); cprintf("U");
gotoxy(44, 13); cprintf("L");
delay(100);
textcolor(8);
gotoxy(37, 13); cprintf("U");
gotoxy(44, 13); cprintf("L");
textcolor(15);
gotoxy(36, 13); cprintf("D");
gotoxy(45, 13); cprintf("G");
delay(100);
textcolor(8);
gotoxy(36, 13); cprintf("D");
gotoxy(45, 13); cprintf("G");
textcolor(15);
gotoxy(35, 13); cprintf("E");
gotoxy(46, 13); cprintf("O");
delay(100);
textcolor(8);
gotoxy(35, 13); cprintf("E");
gotoxy(46, 13); cprintf("O");
textcolor(15);
gotoxy(34, 13); cprintf("H");
gotoxy(47, 13); cprintf("R");
delay(100);
textcolor(8);
gotoxy(34, 13); cprintf("H");
gotoxy(47, 13); cprintf("R");
textcolor(15);
gotoxy(33, 13); cprintf("C");
gotoxy(48, 13); cprintf("I");
delay(100);
textcolor(8);
gotoxy(33, 13); cprintf("C");
gotoxy(48, 13); cprintf("I");
textcolor(15);
gotoxy(32, 13); cprintf("S");
gotoxy(49, 13); cprintf("T");
delay(100);
textcolor(8);
gotoxy(32, 13); cprintf("S");
gotoxy(49, 13); cprintf("T");
textcolor(15);
gotoxy(30, 13); cprintf("U");
gotoxy(50, 13); cprintf("H");
delay(100);
textcolor(8);
gotoxy(30, 13); cprintf("U");
gotoxy(50, 13); cprintf("H");
textcolor(15);
gotoxy(29, 13); cprintf("P");
gotoxy(51, 13); cprintf("M");
delay(100);
textcolor(8);
gotoxy(29, 13); cprintf("P");
gotoxy(51, 13); cprintf("M");
textcolor(15);
gotoxy(28, 13); cprintf("C");
gotoxy(52, 13); cprintf("S");
delay(100);
textcolor(8);
gotoxy(28, 13); cprintf("C");
gotoxy(52, 13); cprintf("S");
sleep(2);

for(x=28; x<=52; x++)
  {
  gotoxy(x, 13); printf(" ");
  delay(100);
  }
clrscr();

menu_back:
textcolor(8);
gotoxy(1, 25); cprintf("Best viewed in maximize window");
gotoxy(67, 1); cprintf("Priority - NP");
gotoxy(1, 1); cprintf("ÚÄÄÄÄÄÄÄ¿");
gotoxy(1, 2); cprintf("³  nter ³");
gotoxy(1, 3); cprintf("ÀÄÄÄÄÄÄÄÙ");
gotoxy(69, 23); cprintf("ÚÄÄÄÄÄÄÄÄÄ¿");
gotoxy(69, 24); cprintf("³  redits ³");
gotoxy(69, 25); cprintf("ÀÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(3, 2); cprintf("E");
gotoxy(71, 24); cprintf("C");
menu=getch();

if(menu=='E' || menu=='e')
  {
  clrscr();
  for(lo=28; lo<=53; lo++)
    {
    textcolor(8);
    gotoxy(lo,14);cprintf("ÛÛ");
    }

  for(lo=0, di=28; lo<=100; lo+=4, di++)
    {
    textcolor(15);
    gotoxy(28,12);cprintf("initializing schedule...");
    gotoxy(28,13);cprintf("%d%", lo);
    gotoxy(di,14);cprintf("ÛÛ");
    delay(200);
    }
  sleep(2);
  goto go;
  }
else if(menu=='C' || menu=='c')
  goto credits;
else
  goto menu_back;

go:
clrscr();
_setcursortype(_SOLIDCURSOR);
back:
textcolor(8);
gotoxy(16, 13); cprintf("ow many processes would you like to put? (1-9)");
textcolor(15);
gotoxy(15, 13); cprintf("H");
gotoxy(62, 13); cprintf(":");
gotoxy(64,13); cscanf("%c", &proc);
clrscr();

if(proc=='1')
  pro=1;
else if(proc=='2')
  pro=2;
else if(proc=='3')
  pro=3;
else if(proc=='4')
  pro=4;
else if(proc=='5')
  pro=5;
else if(proc=='6')
  pro=6;
else if(proc=='7')
  pro=7;
else if(proc=='8')
  pro=8;
else if(proc=='9')
  pro=9;
else
  goto back;

_setcursortype(_SOLIDCURSOR);
textcolor(8);
gotoxy(16, 2); cprintf("ÚÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄ¿        ");
gotoxy(16, 3); cprintf("³ Process ³            ³ Arrival Time ³ Priority ³");
gotoxy(16, 4); cprintf("ÃÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄ´");
textcolor(15);
gotoxy(28, 3); cprintf("Burst Time");

for(x=1; x<=pro; x++)
  {
  textcolor(8);
  gotoxy(16, y); cprintf("³         ³            ³              ³          ³");
  gotoxy(16, y+1); cprintf("ÃÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄ´");
  textcolor(15);
  gotoxy(20, y); cprintf("P%d", x);
  gotoxy(46, y); cprintf("%d", x-1);
  y+=2;
  }

textcolor(8);
gotoxy(16, y-1); cprintf("ÀÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÙ");

y=5;
limits:
do
{
textcolor(15);
gotoxy(32, y); cscanf("%c", &proc);

if(proc=='1')
  burst[burst2]=1;
else if(proc=='2')
  burst[burst2]=2;
else if(proc=='3')
  burst[burst2]=3;
else if(proc=='4')
  burst[burst2]=4;
else if(proc=='5')
  burst[burst2]=5;
else if(proc=='6')
  burst[burst2]=6;
else if(proc=='7')
  burst[burst2]=7;
else if(proc=='8')
  burst[burst2]=8;
else if(proc=='9')
  burst[burst2]=9;
else
  {
  textcolor(8);
  gotoxy(32, y); printf(" ");
  goto limits;
  }

burst2++;
y+=2;
z++;
}
while(z<=pro);

textcolor(8);
gotoxy(28, 3); cprintf("Burst Time");
textcolor(15);
gotoxy(56, 3); cprintf("Priority");

z=1;
y=5;
limits2:
do
{
textcolor(15);
gotoxy(59, y); cscanf("%c", &proc);

if(proc=='1')
  priority[priority2]=1;
else if(proc=='2')
  priority[priority2]=2;
else if(proc=='3')
  priority[priority2]=3;
else if(proc=='4')
  priority[priority2]=4;
else if(proc=='5')
  priority[priority2]=5;
else if(proc=='6')
  priority[priority2]=6;
else if(proc=='7')
  priority[priority2]=7;
else if(proc=='8')
  priority[priority2]=8;
else if(proc=='9')
  priority[priority2]=9;
else
  {
  textcolor(8);
  gotoxy(59, y); printf(" ");
  goto limits2;
  }

priority2++;
y+=2;
z++;
}
while(z<=pro);


_setcursortype(_NOCURSOR);
gotoxy(1, 25); cprintf("P");
gotoxy(26,25);cprintf("...");
textcolor(8);
gotoxy(2, 25); cprintf("ress any key to continue");
gotoxy(56, 3); cprintf("Priority");
getch();
clrscr();

textcolor(8);
gotoxy(2, 1); cprintf("he Gantt Char");
textcolor(15);
gotoxy(1, 1); cprintf("T");
gotoxy(15, 1); cprintf("t");
textcolor(8);
gotoxy(1, 3); cprintf("Ú");
gotoxy(1, 4); cprintf("³");
gotoxy(1, 5); cprintf("À");

y=2;
for(x=1; x<=pro; x++)
  {
  gotoxy(y, 3); cprintf("ÄÄÄÄÄÄÂ");
  gotoxy(y, 4); cprintf("      ³");
  gotoxy(y, 5); cprintf("ÄÄÄÄÄÄÁ");
  y+=7;
  }

gotoxy(y-1, 3); cprintf("¿");
gotoxy(y-1, 4); cprintf("³");
gotoxy(y-1, 5); cprintf("Ù");

y=4;
sum=burst[1];
textcolor(15);
gotoxy(y, 4); cprintf("P1");
gotoxy(y-3, 6); cprintf("0");
gotoxy(y+4, 6); cprintf("%d", burst[1]);
gantt[1]=0;
gantt2[1]=burst[1];
for(x=2; x<=pro; x++)
  {
  max=-1;
  for(z=2; z<=pro; z++)
    if(priority[z]>max && z!=nodup[1] && z!=nodup[2]
    && z!=nodup[3] && z!=nodup[4]
    && z!=nodup[5] && z!=nodup[6] && z!=nodup[7]
    && z!=nodup[8] && z!=nodup[9])
      {
      max=priority[z];
      nodup[x]=z;
      gantt[z]=sum;
      gantt2[z]=sum+burst[z];
      }
  sum+=burst[nodup[x]];
  textcolor(15);
  gotoxy(y+7, 4); cprintf("P%d", nodup[x]);
  gotoxy(y+11, 6); cprintf("%d", sum);
  y+=7;
  }

gotoxy(52, 25); cprintf("P");
gotoxy(77, 25);cprintf("...");
textcolor(8);
gotoxy(53, 25); cprintf("ress any key to continue");
getch();
clrscr();

y=5;
gotoxy(20, 2); cprintf("ÚÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20, 3); cprintf("³     ³ Waiting Time ³ Turnaround Time ³");
gotoxy(20, 4); cprintf("ÃÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

for(x=1; x<=pro; x++)
  {
  textcolor(8);
  gotoxy(20, y); cprintf("³     ³              ³                 ³");
  gotoxy(20, y+1); cprintf("ÃÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
  textcolor(15);
  gotoxy(22, y); cprintf("P%d", x);
  y+=2;
  }

textcolor(8);
gotoxy(20, y-1); cprintf("ÀÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

y=5;
for(x=1; x<=pro; x++)
  {
  textcolor(15);
  gotoxy(28, y); cprintf("%d - %d = %d", gantt[x], arrival[x], gantt[x]-arrival[x]);
  wt+=gantt[x]-arrival[x];
  y+=2;
  }

y=5;
for(x=1; x<=pro; x++)
  {
  textcolor(15);
  gotoxy(44, y); cprintf("%d - %d = %d", gantt2[x], arrival[x], gantt2[x]-arrival[x]);
  tat+=gantt2[x]-arrival[x];
  y+=2;
  }

gotoxy(1, 25); cprintf("P");
gotoxy(26,25);cprintf("...");
textcolor(8);
gotoxy(2, 25); cprintf("ress any key to continue");
getch();
clrscr();

textcolor(8);
gotoxy(2, 1); cprintf("verage Waiting Tim");
gotoxy(2, 5); cprintf("verage Turnaround Tim");
gotoxy(1, 3); cprintf("(");
textcolor(15);
gotoxy(1, 1); cprintf("A");
gotoxy(20, 1); cprintf("e");
gotoxy(1, 5); cprintf("A");
gotoxy(23, 5); cprintf("e");
gotoxy(1, 3); cprintf("%g", wt/pro);
gotoxy(1, 7); cprintf("%g", tat/pro);

gotoxy(56, 25); cprintf("P");
gotoxy(77,25);cprintf("...");
textcolor(8);
gotoxy(57, 25); cprintf("ress any key to exit");
getch();
goto end;

credits:
clrscr();
textcolor(8);
gotoxy(1,1);cprintf(" rogrammer:  nrico  orenzo");
gotoxy(1,3);cprintf(" pecial thanks to:  ade  uliano,  s.  ary  nne  inlao,  rs.  rcelli  alo");
gotoxy(1,25);cprintf(" ress any key to exit");
textcolor(15);
gotoxy(1,1);cprintf("P");
gotoxy(13,1);cprintf("E");
gotoxy(20,1);cprintf("L");
gotoxy(1,3);cprintf("S");
gotoxy(20,3);cprintf("J");
gotoxy(25,3);cprintf("J");
gotoxy(34,3);cprintf("M");
gotoxy(38,3);cprintf("M");
gotoxy(43,3);cprintf("A");
gotoxy(48,3);cprintf("S");
gotoxy(56,3);cprintf("M");
gotoxy(61,3);cprintf("A");
gotoxy(69,3);cprintf("S");
gotoxy(1,25);cprintf("P");
gotoxy(22,25);cprintf("...");
getch();
clrscr();
goto menu_back;

end:
clrscr();
textcolor(4);
gotoxy(37,13);cprintf("THE END!");
return 0;
}








































