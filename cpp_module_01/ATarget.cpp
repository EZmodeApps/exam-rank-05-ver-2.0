//
//  ATarget.cpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#include "ATarget.hpp"


void ATarget::getHitBySpell(const ASpell &target) const {
    std::cout << _type << " has been " << target.getEffects() << "!\n";
}
