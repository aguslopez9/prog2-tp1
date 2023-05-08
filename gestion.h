//
// Created by agust on 3/5/2023.
//

#ifndef TP1_GESTION_H
#define TP1_GESTION_H

#include <string>

class materia {
private:
    int codigo, nota;
    std::string nombre;
public:
    materia();
    materia(int _codigo, std::string _nombre);

    void setNombreMateria(std::string _nombre) {nombre = _nombre;}
    void setCodigoMateria(int _codigo) {codigo = _codigo;}
    void setNota(int _nota) {nota = _nota;}

    std::string getNombreMateria();
    int getCodigoMateria();
    int getNota();
};

class persona {
private:
    int dni;
    std::string apellido, nombre, mail;
public:
    persona();
    persona(int _dni, std::string _nombre, std::string _apellido, std::string _mail);

    void setNombre(std::string _nombre) { nombre = _nombre; }
    void setApellido(std::string _apellido) { apellido = _apellido; }
    void setMail(std::string _mail) { mail = _mail; }
    void setDni(int _dni) { dni = _dni; }

    std::string getNombre();
    std::string getApellido();
    std::string getMail();
    int getDni();

    void mostrarPersona();
    void modificarPersona(int, std::string, std::string, std::string);

    materia M[3];
    void inscrpcionMateria(materia);

};

class alumno : public persona {
private:
    int edad;
    std::string carrera;
public:
    alumno();
    alumno(int _dni, std::string _nombre, std::string _apellido, std::string _mail, int _edad, std::string _carrera);
    void setEdad(int _edad) { edad = _edad; }
    void setCarrera(std::string _carrera) { carrera = _carrera; }
    int getEdad();
    std::string getCarrera();
    void mostrarAlumno();
    void modificarAlumno(int, std::string, std::string, std::string, std::string, int);

};

class docente : public persona {
private:
    std::string titulo;
public:
    docente();
    docente(int _dni, std::string _nombre, std::string _apellido, std::string _mail, std::string _titulo);

    void setTitulo(std::string _titulo) {titulo = _titulo;}
    std::string getTitulo();
    void mostrarDocente();
    void modificarDocente(int, std::string, std::string, std::string, std::string);
    void anotarEnMateria();
    void consultarMaterias();
};



#endif //TP1_GESTION_H
