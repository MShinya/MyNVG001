//
//  LoadScene.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef LoadScene_hpp
#define LoadScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"
#include "Load.hpp"

namespace Scene
{
    class LoadScene : public DefaultAbstractScene
    {
    public:
        LoadScene();
        
        void Draw();
        
        void Update();
        
        String GetScene();
        
        virtual ~LoadScene(){}
    };
}
#endif /* LoadScene_hpp */
