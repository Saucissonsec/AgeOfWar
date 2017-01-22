#ifndef PLAYINGAREA_H
#define PLAYINGAREA_H
#include "Case.h"
#include <vector>

class PlayingArea
{
    public:
        PlayingArea(int taille = 11);
        virtual ~PlayingArea();
        Case* getTerrain(int pos);

    protected:

    private:
        std::vector<Case* > terrain;
};

#endif // PLAYINGAREA_H
