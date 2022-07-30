//
//  Fwoosh.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef Fwoosh_hpp
#define Fwoosh_hpp

#include "ASpell.hpp"

struct Fwoosh: public ASpell {
    Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
    ~Fwoosh() {}
    virtual ASpell *clone() const {return new Fwoosh();}
};

#endif /* Fwoosh_hpp */
