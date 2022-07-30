//
//  Dummy.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef Dummy_hpp
#define Dummy_hpp

#include "ATarget.hpp"

struct Dummy: public ATarget {
    Dummy() : ATarget("Target Practice Dummy") {}
    ~Dummy() {}
    virtual ATarget *clone() const {return new Dummy();}
};


#endif /* Dummy_hpp */
