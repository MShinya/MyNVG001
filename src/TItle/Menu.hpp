//
//  Menu.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <Siv3D.hpp>

class Menu
{
private:
    Font m_font;
    String m_text;
    String m_scene;
    String& m_next;
    Vec2 m_pos;
    Vec2 m_size;
    Color m_color;
    Rect m_region;

public:
    Menu(String text, Vec2 pos, String scene, String& next);
    void Update();
    void Draw();
};
#endif /* Menu_hpp */
