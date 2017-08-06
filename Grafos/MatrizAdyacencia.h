#pragma once
class MatrizAdyacencia
{
private:
	int tamano;
	int **arr;
	//bool *visited;
	const int MAX_TAMANO = 10000;
public:

	enum tipo { NINGUNO = 0, DESCEDIENTE = 1, PATERNAL = 2, CONYUGE = 3 };
	MatrizAdyacencia(int);
	~MatrizAdyacencia();

	int getTamano();
	void incrementar();
	void agregarArista(int, int, tipo);
	void desplegar();
};

