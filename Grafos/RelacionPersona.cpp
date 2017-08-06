#include "stdafx.h"
#include "RelacionPersona.h"


RelacionPersona::RelacionPersona()
{
}


RelacionPersona::~RelacionPersona()
{
}

RelacionPersona::RelacionPersona(char * Id, tipo tipoRelacion) {
	this->relacionPersonaId = Id;
	this->tipoRelacion = tipoRelacion;
}

void RelacionPersona::setTipo(tipo relacion)
{
	this->tipoRelacion = relacion;
}

void RelacionPersona::setId(char *id)
{
	this->relacionPersonaId = id;
}

RelacionPersona::tipo RelacionPersona::getTipo()
{
	return this->tipoRelacion;
}

char * RelacionPersona::getId()
{
	return this->relacionPersonaId;
}
