//
//  TitleScene.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/01.
//

#ifndef TitleScene_hpp
#define TitleScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"
#include "Title.hpp"
#include "Menu.hpp"

namespace Scene
{
    class TitleScene : public DefaultAbstractScene
    {
    private:
        Title m_title;
        Array<Menu> m_menus;
        
    public:
        TitleScene();
        
        void Draw();
        
        void Update();
        
        String GetScene();
        
        virtual ~TitleScene(){}
        
    };
}

#endif /* TitleScene_hpp */
