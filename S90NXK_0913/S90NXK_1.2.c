#include <stdio.h>
#include <stdlib.h>
void feladat_1();
int main()
{

feladat_1();
return 0;
}

void feladat_1() {
FILE *fp;
char ch;
char fnev[50];

printf("Filenev: ");
scanf("%s", fnev);
fp = fopen(fnev, "w");

printf("Uzenet: ");
while( (ch = getchar()) != '#') {
putc(ch, fp);
}
fclose(fp);

fp = fopen(fnev, "r");
while ( (ch = getc(fp)) != EOF ) {
printf("%c",ch);
}
fclose(fp);
return 0;
}
