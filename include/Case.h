#ifndef CASE_H
#define CASE_H

#include "ObjetTerrain.h"


class Case
{
    public:
        Case(ObjetTerrain* OT = NULL, int pos = 0);
        virtual ~Case();
        void setObjet(ObjetTerrain o);
        int getPos(){return m_pos;};

    protected:

    private:
        ObjetTerrain* present;
        int m_pos; //n° de la case

};

#endif // CASE_H
