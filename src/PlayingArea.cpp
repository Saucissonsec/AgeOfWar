#include "PlayingArea.h"
#include <vector>
#include <malloc.h>

PlayingArea::PlayingArea(int taille)
{
    for(int i = 0; i <= taille; i++)
    {
        Case* c = new Case(NULL,i);
        terrain.push_back(c);
    }
}

PlayingArea::~PlayingArea()
{

}

Case* PlayingArea::getTerrain(int pos)
{
    return terrain.at(pos);
}

