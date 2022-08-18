#include <stdio.h>

int playingField(char v, char h, char b, char t1, char t2);
int clear(char simbol);

int main() {
  char v, h, b, t1, t2;
  v = '-';
  h = '|';
  b = 'o';
  t1 = '0';
  t2 = '0';
  playingField(v, h, b, t1, t2);
}

int playingField(char v, char h, char b, char t1, char t2) {
  for (int y = 0; y < 25; y++) {
    for (int x = 0; x < 80; x++) {
      if (y == 0 || y == 24) {
        printf("%c", v);
      } else if (x == 40 && y == 12) {
        printf("%c", b);
      } else if ((x == 1 && y == 12) || (x == 1 && y == 11) ||
                 (x == 1 && y == 13)) {
        printf("%c", h);
      } else if ((x == 78 && y == 12) || (x == 78 && y == 11) ||
                 (x == 78 && y == 13)) {
        printf("%c", h);
      } else if (x == 35 && y == 1) {
        printf("%c", t1);
      } else if (x == 45 && y == 1) {
        printf("%c", t2);
      } else if ((x == 0 || x == 79) && 0 < y && y < 24) {
        printf("%c", h);
      } else if (x == 40) {
        printf("%c", h);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
