#include <iostream>

int main() {
  FILE *fptr;
  fptr = fopen("output.txt", "w");
  fprintf(fptr, "This is an  statement.\n");
}