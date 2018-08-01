/*
   08/01/2018
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
 
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  int x = 2;
  long int z = 0;
  char *str = NULL;

  if (1 == argc || 2 == argc ||
      0 > (z = (strtol(argv[1], (char **)NULL, 10)))) {
    puts("usage: altcase 0 hello world !");
    return EXIT_FAILURE;
  }

  for (; x < argc; x++, z++) {
    for (str = argv[x]; *str; str++) {
      if ((z % 2) == 0) {
        putchar((toupper((unsigned char) *str)));
        z++;
        continue;
      }
      putchar(*str);
      z++;
    }
    if ((x + 1) < argc) {
      putchar(' ');
    }
  }
  putchar('\n');

  return EXIT_SUCCESS;
}
