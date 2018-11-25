//
//  GameScene.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/01.
//

#include "GameScene.hpp"

namespace Scene
{
    GameScene::GameScene()
    :font(Font(50))
    {
        
    }
    
    void GameScene::Draw()
    {
        font(U"GameScene").draw(100, 100);
    }
    
    void GameScene::Update()
    {
    }
    
    String GameScene::GetScene()
    {
        return String(U"game");
    }
}
