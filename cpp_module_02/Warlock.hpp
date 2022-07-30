#ifndef Warlock_hpp
#define Warlock_hpp

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
    std::string _name;
    std::string _title;
    
    SpellBook spellbook;
    
public:
    Warlock(std::string name, std::string title) : _name(name), _title(title) { std::cout << _name << ": This looks like another boring day.\n"; }

    ~Warlock() { std::cout << _name << ": My job here is done!\n"; }
    
const std::string getName() const { return _name; }
const std::string getTitle() const { return _title; }
    
    void setTitle(const std::string title) { _title=title; }
    

void introduce() const { std::cout << _name << ": I am " << _name << ", " << _title << "!\n"; }
    
    void learnSpell(ASpell *spell) { spellbook.learnSpell(spell); }
    
    void forgetSpell(const std::string &name) { spellbook.forgetSpell(name); }
    
    void launchSpell(const std::string &name, ATarget &target) {
        ASpell *spell = spellbook.createSpell(name);
        if (spell)
            spell->launch(target); }
    
    };
#endif /* Warlock_hpp */
