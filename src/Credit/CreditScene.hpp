//
//  CreditScene.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/12/15.
//

#ifndef CreditScene_hpp
#define CreditScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"

namespace Scene
{
    class CreditScene : public DefaultAbstractScene
    {
    public:
        CreditScene();
        
        void Update();
        
        void Draw();
        
        String GetScene();
        
    private:
        
    };
}

#endif /* CreditScene_hpp */
