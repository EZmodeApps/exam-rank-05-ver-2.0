#ifndef Warlock_hpp
#define Warlock_hpp

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
private:
    std::string _name;
    std::string _title;
    
    std::map<std::string, ASpell*> map;
    
public:
    Warlock(std::string name, std::string title) : _name(name), _title(title) { std::cout << _name << ": This looks like another boring day.\n"; }

    ~Warlock() { std::cout << _name << ": My job here is done!\n"; }
    
std::string getName() const { return _name; }
std::string getTitle() const { return _title; }

void introduce() const { std::cout << _name << ": I am " << _name << ", " << _title << "!\n"; }
    
    void learnSpell(ASpell *spell) { map[spell->getName()] = spell; }
    
    void forgetSpell(const std::string &name) { map.erase(name); }
    
    void launchSpell(const std::string &name, ATarget &target) {
        if (map[name] != 0)
            map[name]->launch(target); }
    
    };
#endif /* Warlock_hpp */
