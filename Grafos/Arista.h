#pragma once
#include "Nodo.h"
class Arista
{
private:

	Nodo Fuente;
	Nodo Destino;

public:
	Arista();
	~Arista();

	void SetFuente(Nodo *&);
	Nodo *&GetDestino();
};

