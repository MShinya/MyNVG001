//
//  InputCharaName.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef InputCharaNameScene_hpp
#define InputCharaNameScene_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"
#include "Load.hpp"

namespace Scene
{
    class InputCharaNameScene : public DefaultAbstractScene
    {
    private:
        const Font m_textBoxFont;
        const Font m_explainFont;
        String m_charaName;
        String m_explainText;
        TextBox m_textBox;
        Load m_load;
        
    public:
        InputCharaNameScene();
        
        void Update();
        
        void Draw();
        
        String GetScene();
        
        virtual ~InputCharaNameScene() {}
    };
}

#endif /* InputCharaNameScene_hpp */
