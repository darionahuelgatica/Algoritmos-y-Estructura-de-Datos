/*
* 02-TiposDeDatos
* Darío Nahuel Gatica 1638555
* 29/04/2019
*/
#include <string>
#include <assert.h>
using namespace std;

void testValue(bool booleano)
{
  assert(booleano);
  printf("bool OK\n");
}
void testValue(unsigned edad)
{
  assert(edad == 21);
  printf("unsigned OK\n");
}
void testValue(int nota)
{
  assert(nota == 10);
  printf("int OK\n");
}
void testValue(double promedio)
{
  assert(promedio == 10.00);
  printf("double OK\n");
}
void testValue(char arroba)
{
  assert(arroba == 64);
  printf("char OK\n");
}
void testValue(string mail)
{
  assert(mail == "dario.20398@gmail.com");
  printf("string OK\n");
}

int main() {
    printf("\nHola de nuevo.\n\n");
    bool aprobado = true;
    testValue(aprobado);
    unsigned edad = 21;
    testValue(edad);
    int nota = 10;
    testValue(nota);
    double promedio = 10.00;
    testValue(promedio);
    char arroba = '@';
    testValue(arroba);
    string mail = "dario.20398gmail.com";
    mail.insert(11, 1, arroba);
    testValue(mail);
    printf("\nAdios.\n");
}