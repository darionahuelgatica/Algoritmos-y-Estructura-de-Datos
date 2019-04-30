/*
* 02-TiposDeDatos
* Darío Nahuel Gatica 1638555
* 29/04/2019
*/
#include <string>
#include <assert.h>
using namespace std;

void testValue(char arroba)
{
  assert(arroba == 64);
}
void testValue(string mail)
{
  assert(mail == "dario.20398@gmail.com");
}
void testValue(unsigned edad)
{
  assert(edad == 21);
}
void testValue(int nota)
{
  assert(nota == 10);
}
void testValue(double promedio)
{
  assert(promedio == 10.00);
}
void testValue(bool booleano)
{
  assert(booleano);
}

int main() {
    char arroba = '@';
    testValue(arroba);
    string mail = "dario.20398gmail.com";
    mail.insert(11, 1, arroba);
    testValue(mail);
    unsigned edad = 21;
    testValue(edad);
    int nota = 10;
    testValue(nota);
    double promedio = 10.00;
    testValue(promedio);
    bool aprobado = true;
    testValue(aprobado);
}