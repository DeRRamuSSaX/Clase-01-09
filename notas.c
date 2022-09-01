#include <stdio.h>
#include <stdlib.h>

void presskey() {
  printf("Presione cualquier tecla\n");
  getchar();
};

void print_menu() {
  system("clear");
  printf("(1) Agregar Notas\n");
  printf("(2) Ver Notas\n");
  printf("(3) Borrar Notas\n");
  printf("(4) Salir\n");
};

void save_note() {
  FILE *fp;
  fp = fopen("notas.txt", "a");
  printf("Ingrese su nota: ");
  char note[100];
  fgets(note, 100, stdin);
  fprintf(fp, "%s", note);
  fclose(fp);
  return;
};

void read_note() {
  FILE *fp;
  fp = fopen("notas.txt", "r");
  if (fp == NULL) {
    printf("No hay notas todavia\n");
    presskey();
    return;
  }
  int c;
  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  fclose(fp);
  presskey();
  return;
};

void delete_note() {
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
  printf("Notas Borradas!\n");
  presskey();
  return;
};

int main(void) {
  int choice;
  while (1) {
    print_menu();
    scanf("%d", &choice);
    getchar();
    switch (choice) {
      case 1:
        save_note();
        break;
      case 2:
        read_note();
        break;
      case 3:
        delete_note();
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Opcion Desconocida\n");
        break;
    }
  }
  return 0;
}
