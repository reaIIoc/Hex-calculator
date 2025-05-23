// Converts decimal to binary code and hex. 
// ovh.feminine216@passinbox.com

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <strings.h>

void sleep(int x) {
  Sleep(x);
}

void clearScreen() {
  system("cls");
}

void decToHex() {
  int dec;
  clearScreen();
  printf("\tEnter decimal value: ");
  scanf("%d", &dec);
  char hex[15] = "123456789ABCDEF";
  char rawConversion[20] = "";
  char decToHex[20] = "";
  int nVal = dec;
  int hexLength = 0; 
  while (nVal != 0) {
    int nd = nVal / 16;
    int nq = nVal % 16;
    rawConversion[hexLength] = hex[nq - 1];
    hexLength++;
    nVal = nd;
  }

  int iterFinal = hexLength;
  int addElements = 0;
  printf("\n\tConversion: ");
  while (hexLength != 0) {
    decToHex[addElements] = rawConversion[hexLength - 1];
    printf("%c", decToHex[addElements]);
    hexLength--;
    addElements++;
  }
  sleep(2000);
}

void decToBin() {
  int dec;
  clearScreen();
  printf("\tEnter decimal value: ");
  scanf("%d", &dec);
  const char pbit = '1';
  int decrement = 8;
  char binary[8] = "00000000";
  int n = dec;
  while (n != 0) {
    decrement--;
    int nd = n / 2;
    int nq = n % 2;
    if (nq == 1) {
      binary[decrement] = pbit;
    }
    n = nd;
  }
  printf("\n\tConversion: %s", binary);
  sleep(2000);
}

int main() {
  clearScreen();
  int selection;
  puts("\t\tHex calculator | Programmed by Datarec\n");
  puts("\t1) Dec to hex");
  puts("\t2) Dec to bin");
  puts("\t3) Hex to dec");
  puts("\t4) Bin to dec");
  printf("\n\n\t>> ");
  scanf("%d", &selection);
  switch (selection) {
    case 1:
      decToHex();
      main();
    case 2:
      decToBin();
      main();
  }
}
