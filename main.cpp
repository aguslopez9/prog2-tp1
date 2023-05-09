#include <iostream>
#include "gestion.h"
#include "string"

using namespace std;

void alta(alumno *, docente *);

void inscribirMateria(alumno *, materia *);

void anotarTitular();

void cargarNota();

void modificarDatos(alumno *, docente *);

void mostrarDatos(alumno *, docente *);

int main() {
    int op;
    alumno a[3];
    docente d[3];
    materia m[3];
    for (int i = 0; i < 3; ++i) {
        a[i] = alumno();
        d[i] = docente();
    }

    do {
        cout << "1. Alta" << endl;
        cout << "2. Inscribir a materia" << endl;
        cout << "3. Anotar titular" << endl;
        cout << "4. Cargar Nota" << endl;
        cout << "5. Modificar Datos" << endl;
        cout << "6. Mostrar Datos" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> op;
        switch (op) {
            case 1:
                alta(a, d);
                break;
            case 2:
                inscribirMateria(a, m);
                break;
            case 3:
                //anotarTitular();
                break;
            case 4:
                //cargarNota();
                break;
            case 5:
                modificarDatos(a, d);
                break;
            case 6:
                mostrarDatos(a, d);
                break;
            case 7:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (op != 6);

    return 0;
}

void mostrarDatos(alumno *al, docente *doc) {
    int x;
    cout << "Ingrese DNI: ";
    cin >> x;
    for (int i = 0; i < 3; ++i) {
        if ((al[i].getDni() == x)) {
            al[i].mostrarAlumno();
        } else if ((doc[i].getDni() == x)) {
            doc[i].mostrarDocente();
        } else {
            cout << "No se encontro el dni" << endl;
        }
    }
}

void alta(alumno *al, docente *doc) {
    int dni, edad;
    std::string nombre, apellido, mail, carrera, titulo;
    int op;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Alumno" << endl;
    cout << "2. Docente" << endl;
    cout << "Ingrese una opcion: ";
    cin >> op;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "DNI: ";
    cin >> dni;
    cout << "Mail: ";
    cin >> mail;
    switch (op) {
        case 1: {
            cout << "Edad: ";
            cin >> edad;
            cout << "Carrera: ";
            cin >> carrera;
            for (int i = 0; i < 3; ++i) {
                while (al[i].getDni() == 0) {
                    al[i] = alumno(dni, nombre, apellido, mail, edad, carrera);
                    break;
                }
            }
        }
            break;
        case 2:
            cout << "Titulo: ";
            cin >> titulo;
            for (int i = 0; i < 3; ++i) {
                while (doc[i].getDni() == 0) {
                    doc[i] = docente(dni, nombre, apellido, mail, titulo);
                    break;
                }
            }

            break;
        default:
            cout << "Opción invalida" << endl;
            break;
    }
}

void inscribirMateria(alumno *al, materia *ma) {
    int x, codigo;
    std::string nombre;
    cout << "Ingrese DNI: ";
    cin >> x;
    for (int i = 0; i < 3; ++i) {
        if ((al[i].getDni() == x)) {
            al[i].inscrpcionMateria(ma[i]);
        } else {
            cout << "El dni no coincide con el de ningun alumno" << endl;
        }
    }

};

void anotarTitular() {

};

void cargarNota() {

};

void modificarDatos(alumno *al, docente *doc) {
    int x, posicion, esAlumno = false, esDocente = false;
    cout << "Ingrese DNI: ";
    cin >> x;
    for (int i = 0; i < 3; ++i) {
        if ((al[i].getDni() == x)) {
            posicion = i;
            esAlumno = true;
            al[i].mostrarAlumno();
        } else if ((doc[i].getDni() == x)) {
            posicion = i;
            doc[i].mostrarDocente();
            esDocente = true;
        } else {
            cout << "No se encontro el dni" << endl;
        }
    }
    int dni, edad;
    std::string nombre, apellido, mail, carrera, titulo;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "DNI: ";
    cin >> dni;
    cout << "Mail: ";
    cin >> mail;
    if (esAlumno) {
        cout << "Edad: ";
        cin >> edad;
        cout << "Carrera: ";
        cin >> carrera;
        al[posicion] = alumno(dni, nombre, apellido, mail, edad, carrera);
    } else if (esDocente) {
        cout << "Titulo: ";
        cin >> titulo;
        doc[posicion] = docente(dni, nombre, apellido, mail, titulo);
    }
}

