#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class ANodoArbol {
public:
    String^ info;
    List<ANodoArbol^>^ hijos;
    String^ descripcion; // Para áreas
    String^ responsable; // Para áreas
    String^ rol; // Para personas
    int edad; // Para personas
    String^ genero; // Para personas

    ANodoArbol(String^ info) {
        this->info = info;
        hijos = gcnew List<ANodoArbol^>();
        descripcion = nullptr;
        responsable = nullptr;
        rol = nullptr;
        edad = 0;
        genero = nullptr;
    }
};
