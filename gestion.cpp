//
// Created by agust on 3/5/2023.
//

#include "gestion.h"
#include <iostream>

using namespace std;

persona::persona() : persona(0, "", "", "") {}
persona::persona(int _dni, std::string _nombre, std::string _apellido, std::string _mail) {
    dni = _dni;
    nombre = _nombre;
    apellido = _apellido;
    mail = _mail;

}

alumno::alumno() :alumno(0,"","","",0,""){}
alumno::alumno(int _dni, std::string _nombre, std::string _apellido, std::string _mail, int _edad, std::string _carrera)
        : persona(_dni, _nombre, _apellido, _mail) {
    edad = _edad;
    carrera = _carrera;
}

docente::docente() : docente(0, "", "", "", ""){}
docente::docente(int _dni, std::string _nombre, std::string _apellido, std::string _mail, std::string _titulo)
        : persona(_dni, _nombre, _apellido, _mail) {
    titulo = _titulo;
}

void persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Mail: " << mail << endl;
}

void persona::modificarPersona(int _dni, std::string _nombre, std::string _apellido, std::string _mail) {
    nombre = _nombre;
    apellido = _apellido;
    mail = _mail;
    dni = _dni;


}

void alumno::modificarAlumno(int _dni, std::string _nombre, std::string _apellido, std::string _mail, std::string _carrera, int _edad) {
    modificarPersona(_dni, _nombre, _apellido, _mail);
    carrera = _carrera;
    edad = _edad;
}

void docente::modificarDocente(int _dni, std::string _nombre, std::string _apellido, std::string _mail, std::string _titulo) {
    modificarPersona(_dni, _nombre, _apellido, _mail);
    titulo = _titulo;
}

void alumno::mostrarAlumno() {
    mostrarPersona();
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
}

void docente::mostrarDocente() {
    mostrarPersona();
    cout << "Titulo: " << titulo << endl;

}

std::string persona::getNombre() {
    return nombre;
}
std::string persona::getApellido() {
    return apellido;
}
std::string persona::getMail() {
    return mail;
}
int persona::getDni() {
    return dni;
}

void persona::inscrpcionMateria(materia) {
    for (int i = 0; i < 3; ++i) {

    }
}

std::string alumno::getCarrera() {
    return carrera;
}
int alumno::getEdad() {
    return edad;
}

std::string docente::getTitulo() {
    return titulo;
}

materia::materia(int _codigo, std::string _nombre) {
    codigo = _codigo;
    nombre = _nombre;
    nota = -1;
}
std::string materia::getNombreMateria() {
    return nombre;
}
int materia::getCodigoMateria() {
    return codigo;
}
int materia::getNota() {
    return nota;
}
