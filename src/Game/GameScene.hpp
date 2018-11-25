//
//  GameScene.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/01.
//

#ifndef GameScene_hpp
#define GameScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"

namespace Scene
{
    class GameScene : public DefaultAbstractScene
    {
    public:
        GameScene();
        
        void Draw();
        
        void Update();
        
        String GetScene();
        
        virtual ~GameScene(){}
        
        Font font;
    };
}
#endif /* GameScene_hpp */
