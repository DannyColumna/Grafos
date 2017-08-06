#pragma once
class RelacionPersona
{
public:
	RelacionPersona();
	~RelacionPersona();

	enum tipo { NINGUNO = 0, DESCEDIENTE = 1, PATERNAL = 2, CONYUGE = 3 };
	RelacionPersona(char*, tipo);

	void setTipo(tipo);
	void setId(char*);

	tipo getTipo();
	char* getId();

private:
	char *relacionPersonaId;
	tipo tipoRelacion;

};

