#pragma once
#include "ANodo.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class ArbolGeneral {
public:
    ANodoArbol^ raiz;

    ArbolGeneral() {
        raiz = nullptr;
    }

    bool vacio() {
        return raiz == nullptr;
    }

    void InsertarRaiz(ANodoArbol^ a) {
        if (vacio()) {
            raiz = a;
        }
    }

    void Insertar(ANodoArbol^ a, ANodoArbol^ padre) {
        padre->hijos->Add(a);
    }

    void Eliminar(ANodoArbol^ padre, String^ info) {
        for (int i = 0; i < padre->hijos->Count; ++i) {
            if (padre->hijos[i]->info == info) {
                padre->hijos->RemoveAt(i);
                MessageBox::Show("El elemento eliminado es = " + info);
                return;
            }
        }
    }

    String^ PreOrden(ANodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            result += r->info + "  ";
            for each (ANodoArbol ^ hijo in r->hijos) {
                result += PreOrden(hijo);
            }
        }
        return result;
    }

    String^ EntreOrden(ANodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            if (r->hijos->Count > 0) {
                result += EntreOrden(r->hijos[0]);
            }
            result += r->info + "  ";
            for (int i = 1; i < r->hijos->Count; ++i) {
                result += EntreOrden(r->hijos[i]);
            }
        }
        return result;
    }

    String^ PosOrden(ANodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            for each (ANodoArbol ^ hijo in r->hijos) {
                result += PosOrden(hijo);
            }
            result += r->info + "  ";
        }
        return result;
    }

    ANodoArbol^ buscar(ANodoArbol^ r, String^ nombre) {
        if (r != nullptr) {
            if (r->info == nombre) {
                return r;
            }
            for each (ANodoArbol ^ hijo in r->hijos) {
                ANodoArbol^ aux = buscar(hijo, nombre);
                if (aux != nullptr) {
                    return aux;
                }
            }
        }
        return nullptr;
    }

    ANodoArbol^ buscar(String^ nombre) {
        return buscar(raiz, nombre);
    }
};

