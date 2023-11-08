// En uan clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
// Alumnos que aprobaron todos los examenes.
// Alumnos que aprobaron al menos un examen.
// Alumnos que aprobaron unicamente el ultimo examen.
// Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.

#include <iostream>

using namespace std;

int main() {
    int aprobadosTodos = 0, aprobadosAlguno = 0, aprobadosUltimo = 0;

    for ( int i = 1; i <= 5; i++ ) {
        int examen1, examen2, examen3;
        cout << "\nIntroduzca la nota del primer examen del alumno " << i << ": ";
        cin >> examen1;
        cout << "\nIntroduzca la nota del segundo examen del alumno " << i << ": ";
        cin >> examen2;
        cout << "\nIntroduzca la nota del tercer examen del alumno " << i << ": ";
        cin >> examen3;

        if ( examen1 >= 6 && examen2 >= 6 && examen3 >= 6 ) {
            aprobadosTodos++;
        }
        if ( examen1 >= 6 || examen2 >= 6 || examen3 >= 6 ) {
            aprobadosAlguno++;
        }
        if ( examen3 >= 6 ) {
            aprobadosUltimo++;
        }
    }

    cout << "\nAlumnos que aprobaron todos los examenes: " << aprobadosTodos << endl;
    cout << "Alumnos que aprobaron al menos un examen: " << aprobadosAlguno << endl;
    cout << "Alumnos que aprobaron unicamente el ultimo examen: " << aprobadosUltimo << endl;


    return 0;
}
