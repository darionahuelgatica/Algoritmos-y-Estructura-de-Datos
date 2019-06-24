/*
* 02-TiposDeDatos
* Darío Nahuel Gatica 1638555
* 29/04/2019
*/
#include <string>
#include <cassert>
using namespace std;

int main() {
    char arroba = '@';
    assert(64 == arroba);
	
    string mail = "dario.20398gmail.com";
    mail.insert(11, 1, arroba);
    assert("dario.20398@gmail.com" == mail);
	
    unsigned edad = 21;
    assert(21 == edad);
	
    int nota = 10;
    assert(10 == nota);
	
    double promedio = 10.00;
    assert(10.0 == promedio);
	
    bool aprobado = true;
    assert(aprobado);
}
