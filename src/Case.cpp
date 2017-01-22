#include "Case.h"
#include "ObjetTerrain.h"

Case::Case(ObjetTerrain* OT, int pos) : m_pos(pos)
{
    present = OT;
}

Case::~Case()
{
    //dtor
}

void Case::setObjet(ObjetTerrain o)
{
    present = &o ;
}
