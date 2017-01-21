#include "Unite.h"

Unite::Unite(std::string name, int HP, int atk, int prix,
              int minRange, int maxRange) : ObjetTerrain(name, HP),
                                            m_atk(atk),
                                            m_minRange(minRange),
                                            m_maxRange(maxRange)
{
    //ctor
}

Unite::~Unite()
{
    //dtor
}

void Unite::printInfos()
{
    ObjetTerrain::printInfos();
    std::cout<< "\n Attaque : "<<m_atk
    <<"\n Portée : de "<<m_minRange<<" à "<<m_maxRange<<std::endl;
}
