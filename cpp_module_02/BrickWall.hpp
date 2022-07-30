//
//  BrickWall.hpp
//  exam_prep
//
//  Created by Ilya on 29.07.2022.
//

#ifndef BrickWall_hpp
#define BrickWall_hpp

#include "ATarget.hpp"

struct BrickWall: public ATarget {
    BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
    ~BrickWall() {}
    virtual ATarget *clone() const {return new BrickWall();}
};

#endif /* BrickWall_hpp */
