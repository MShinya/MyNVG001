//
//  TitleScene.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/01.
//

#include "TitleScene.hpp"
#include "Title.hpp"

namespace Scene
{
    TitleScene::TitleScene()
    :m_title(Title())
    {
        Array<std::pair<String, String>> menuTexts = {
            {U"初めから", U"inputName"},
            {U"続きから", U"load"},
            {U"クレジット", U"credit"},
            {U"ゲーム終了", U"exit"}
        };
        for(int i = 0; i < menuTexts.size(); ++i)
        {
            m_menus.push_back(Menu(menuTexts[i].first, Vec2(Window::Width()/2, i * 90 + 300), menuTexts[i].second, this -> next_));
        }
    }
    
    void TitleScene::Draw()
    {
        m_title.Draw();
        
        for(auto& menu : m_menus)
        {
            menu.Draw();
        }
    }
    
    void TitleScene::Update()
    {
        m_title.Update();
        
        for(auto& menu : m_menus)
        {
            menu.Update();
        }
        
        /*
         if(MouseL.pressed() || KeyEnter.down())
         {
         this -> next_ = U"game";
         }
         else
         {
         this -> next_ = U"";
         }
         */
    }
    
    String TitleScene::GetScene()
    {
        return String(U"title");
    }
}
