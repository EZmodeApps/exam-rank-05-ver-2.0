#ifndef SpellBook_hpp
#define SpellBook_hpp

#include <map>
#include "ASpell.hpp"

class SpellBook {
    std::map<std::string, ASpell*> map;
public:
    SpellBook() {}
    ~SpellBook() {}
    
    void learnSpell(ASpell *spell) { map[spell->getName()] = spell; }
    
    void forgetSpell(const std::string &name) { map.erase(name); }
    
    ASpell *createSpell(const std::string &name) {return map[name] != 0 ? map[name] : 0;}
};

#endif /* SpellBook_hpp */
