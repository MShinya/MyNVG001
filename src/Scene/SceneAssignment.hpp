//
//  SceneAssignment.hpp
//  SceneTest
//
//  Created by 三浦真矢 on 2018/11/01.
//

#ifndef SceneAssignment_hpp
#define SceneAssignment_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"
#include "TitleScene.hpp"
#include "GameScene.hpp"
#include "InputCharaNameScene.hpp"
#include "SaveScene.hpp"
#include "LoadScene.hpp"
#include "Load.hpp"

namespace Scene
{
    template <typename AbstractScene = DefaultAbstractScene>
    class SceneAssignment {
        typedef String KeyType;
        typedef std::unique_ptr<AbstractScene> UPAbs;
        typedef std::unordered_map<KeyType, UPAbs> Assoc;
        
    public:
        static KeyType Assign(Assoc& assoc)
        {
            // Load commonLoad;
            std::shared_ptr<Load> SPcommmonLoad(new Load);
            // ゲームが開始された時のシーン(タイトル画面)
            static String title(U"title");
            
            assoc[title] = UPAbs(new TitleScene);
            assoc[U"game"] = UPAbs(new GameScene);
            assoc[U"inputName"] = UPAbs(new InputCharaNameScene);
            assoc[U"save"] = UPAbs(new SaveScene);
            assoc[U"load"] = UPAbs(new LoadScene);
            
            assoc[U"inputName"] -> m_Load = SPcommmonLoad;
            assoc[U"load"] -> m_Load = SPcommmonLoad;
            
            return title;
        }
    };
}

#endif /* SceneAssignment_hpp */
