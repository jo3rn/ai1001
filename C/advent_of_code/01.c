#include <stdio.h>

// ACHTUNG: Programm ist noch nicht ganz fertig :)

int main(int argc, char *argv[]) {
  printf("Advent of Code: Tag 1\n");

  FILE *file = NULL;
  file = fopen(argv[1], "r");

  if (file != NULL) {
    printf("Konnte Datei nicht lesen!\n");
    return 1;
  } else {
    printf("Lese Datei: %s\n", argv[1]);
  }

  int prev = 0;
  int curr;
  int count = 0;

  while (!feof(file)) {
    fscanf(file, "%d", &curr);
    if (curr > prev) {
      count++;
    }
    prev = curr;
  }

  printf("Tiefenmessung hat sich %d Mal erhoeht.\n", count);

  fclose(file);
  return 0;
}