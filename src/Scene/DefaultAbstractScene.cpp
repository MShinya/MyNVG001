//
//  DefaultAbstractClass.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/10/31.
//

#include "DefaultAbstractScene.hpp"

namespace Scene
{
    String DefaultAbstractScene::GetNextScene()
    {
        if(this -> next_.empty())
        {
            if(!this -> GetScene().empty())
            {
                return this -> GetScene();
            }
            else
            {
                throw std::runtime_error("Self scene is empty.");
            }
        }
        else
        {
            return this -> next_;
        }
    }
    
    void DefaultAbstractScene::SetNextScene(String next)
    {
        this -> next_ = next;
    }
}
