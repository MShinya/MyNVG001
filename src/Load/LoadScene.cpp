//
//  LoadScene.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#include "LoadScene.hpp"

namespace Scene
{
    LoadScene::LoadScene()
    {
        
    }
    
    void LoadScene::Draw()
    {
        ClearPrint();
        Print(m_Load -> isGameFirstFrag);
    }
    
    void LoadScene::Update()
    {
        
    }
    
    String LoadScene::GetScene()
    {
        return String(U"load");
    }
}
