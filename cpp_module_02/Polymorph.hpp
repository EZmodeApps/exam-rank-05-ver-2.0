//
//  Polymorph.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef Polymorph_hpp
#define Polymorph_hpp

#include "ASpell.hpp"

struct Polymorph: public ASpell {
    Polymorph() : ASpell("Polymorph", "turned into a critter") {}
    ~Polymorph() {}
    virtual ASpell *clone() const {return new Polymorph();}
};

#endif /* Polymorph_hpp */
