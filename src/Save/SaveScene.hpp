//
//  SaveScene.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef SaveScene_hpp
#define SaveScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"

namespace Scene {
    class SaveScene : public DefaultAbstractScene
    {
    private:
        
    public:
        SaveScene();
        
        void Draw();
        
        void Update();
        
        String GetScene();
        
        virtual ~SaveScene(){}
    };
}

#endif /* SaveScene_hpp */
