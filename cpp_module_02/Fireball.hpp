//
//  Fireball.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef Fireball_hpp
#define Fireball_hpp

#include "ASpell.hpp"

struct Fireball: public ASpell {
    Fireball() : ASpell("Fireball", "burnt to a crisp") {}
    ~Fireball() {}
    virtual ASpell *clone() const {return new Fireball();}
};
#endif /* Fireball_hpp */
