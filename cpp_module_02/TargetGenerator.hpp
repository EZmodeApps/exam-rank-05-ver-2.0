//
//  TargetGenerator.hpp
//  exam_prep
//
//  Created by Ilya on 30.07.2022.
//

#ifndef TargetGenerator_hpp
#define TargetGenerator_hpp

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
    std::map<std::string, ATarget*> map;
    
public:
    void learnTargetType(ATarget *target) { map[target->getType()] = target; }
    
    void forgetTargetType(const std::string &name) { map.erase(name); }
    
    ATarget *createTarget(const std::string &name) {
        return map[name] != 0 ? map[name] : 0;}
};

#endif /* TargetGenerator_hpp */
