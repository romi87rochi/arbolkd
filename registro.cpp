/* 
 * File:   registro.cpp
 * Author: francisco
 * 
 * Created on 5 de mayo de 2012, 16:42
 */

#include "registro.h"

int Registro::GetLinea() {
    
    return linea;
}

int Registro::GetFranjaHoraria() {
    
    return franjaHoraria;
}

int Registro::GetFalla() {
    
    return falla;
}

int Registro::GetAccidente() {
    
    return accidente;
}

int Registro::GetFormacion() {
    
    return formacion;
}

void Registro::SetLinea(int linea) {
    
    this->linea = linea;
}


void Registro::SetFalla(int falla) {
    
    this->falla = falla;
}

void Registro::SetAccidente(int accidente) {
    
    this->accidente = accidente;
}

void Registro::SetFormacion(int formacion) {
    
    this->formacion = formacion;
}


