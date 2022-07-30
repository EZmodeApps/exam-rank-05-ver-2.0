//
//  ASpell.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef ASpell_hpp
#define ASpell_hpp

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
private:
    std::string _name;
    std::string _effects;
    
public:
    ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}
    virtual ~ASpell() {}
    
    const std::string &getName() const { return _name; }
    
    const std::string &getEffects() const { return _effects; }
    
    virtual ASpell *clone() const = 0;
    
    void launch(const ATarget &target);
};

#endif /* ASpell_hpp */
