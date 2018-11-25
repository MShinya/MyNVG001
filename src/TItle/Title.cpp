//
//  Title.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#include "Title.hpp"

Title::Title()
:m_font(Font(100, Typeface::Regular))
,m_title(U"Title Not Decided")
,m_basePos(Vec2(Window::Width()/2 - m_font(m_title).region().w/2, 30))
{
    m_penPos = m_basePos;
    m_stopwatch = Stopwatch(true);
}

void Title::TitleRender()
{
    const double maxChar = m_stopwatch.ms() / 80.0;
    for(const auto& glyph : m_font(m_title))
    {
        const double t = maxChar - glyph.index;
        if(const double a = Saturate(t / 6); a > 0.0)
        {
            const double y = EaseIn(Easing::Quad, Saturate(1 - t / 4)) * 25.0;
            glyph.texture.draw(m_penPos + glyph.offset - Vec2(0, y), ColorF(0.05, a));
        }
        m_penPos.x += glyph.xAdvance;
    }
}
void Title::Update()
{
    m_penPos = m_basePos;
}

void Title::Draw()
{
    TitleRender();
}
