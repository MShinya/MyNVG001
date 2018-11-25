//
//  Menu.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#include "Menu.hpp"

Menu::Menu(String text, Vec2 pos, String scene, String& next)
:m_font(Font(40, Typeface::Regular))
,m_text(text)
,m_scene(scene)
,m_next(next)
,m_pos(pos)
,m_color(Color(0,0,0))
{
    Rect region = m_font(m_text).region();
    m_region = region.movedBy(m_pos.x - region.w / 2, m_pos.y - region.h/2);
}

void Menu::Update()
{
    if(m_region.mouseOver())
    {
        m_color = Color(200, 100, 100);
        if(MouseL.down())
        {
            m_next = m_scene;
        }
    }
    else
    {
        m_color = Color(0,0,0);
    }
}

void Menu::Draw()
{
    m_font(m_text).drawAt(m_pos, m_color);
}
