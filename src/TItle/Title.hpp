//
//  Title.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef Title_hpp
#define Title_hpp

#include <Siv3D.hpp>

class Title
{
private:
    const Font m_font;
    const String m_title;
    const Vec2 m_basePos;
    Vec2 m_penPos;
    Stopwatch m_stopwatch;
    
public:
    Title();
    void Update();
    void Draw();
    void TitleRender();
};

#endif /* Title_hpp */
