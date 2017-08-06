#pragma once
#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"
#include "MatrizAdyacencia.h"
#include "PersonaGrafo.h"
#include "Persona.h"

#include "RelacionPersona.h"
class GrafoFamiliar
{
private:
	MatrizAdyacencia * matrizAdyacencia ;
	Lista< PersonaGrafo > * personas;
	int numeroPersonas;
	void agregarRelaciones(PersonaGrafo*, Lista<RelacionPersona> *);
public:
	GrafoFamiliar();
	~GrafoFamiliar();

	void AgregarPersona(Persona* , Lista<RelacionPersona> *);
	void EliminarPersona(int);
	void EditarPersona(Persona*);
	PersonaGrafo *BuscarPersona(char*);

	void DesplegarTodo();
};

