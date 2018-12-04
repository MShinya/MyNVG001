//
//  InputCharaName.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#include "InputCharaNameScene.hpp"
#include "SaveData.hpp"

namespace Scene
{
    InputCharaNameScene::InputCharaNameScene()
    :m_textBoxFont(Font(50, Typeface::Regular))
    ,m_explainFont(Font(50, Typeface::Regular))
    ,m_textBox(TextBox(m_textBoxFont, Vec2(440, 300), 400))
    ,m_explainText(U"主人公の名前を入力してください")
    ,m_charaName(U"貞一郎")
    {
    }
    
    void InputCharaNameScene::Update()
    {
        const auto result = m_textBox.update();
        if(result == TextBox::State::Tab || result == TextBox::State::Enter)
        {
            m_textBox.setActive(true);
        }
        if(SimpleGUI::ButtonAt(U"決定", Vec2(Window::Width()/2, 500), 200))
        {
            SaveData::setMainCharaName(m_textBox.getText());
            m_Load -> isGameFirstFrag = true;
            this -> next_ = U"load";
        }
    }
    
    void InputCharaNameScene::Draw()
    {
        m_explainFont(m_explainText).drawAt(Vec2(Window::Width()/2, 170), Palette::Black);
        m_textBox.draw();
        m_textBox.drawOverlay();
    }
    
    String InputCharaNameScene::GetScene()
    {
        return String(U"inputName");
    }
}
