//
//  ATarget.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef ATarget_hpp
#define ATarget_hpp

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
private:
    std::string _type;
    
public:
    ATarget(std::string type): _type(type) {}
    virtual ~ATarget() {}
    
    const std::string &getType() const { return _type; }
    
    virtual ATarget *clone() const = 0;
    
    void getHitBySpell(const ASpell &target) const;
};

#endif /* ATarget_hpp */
