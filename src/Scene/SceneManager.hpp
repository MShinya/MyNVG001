//
//  SceneManager.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/10/31.
//

#ifndef SceneManager_hpp
#define SceneManager_hpp

#include <Siv3D.hpp>
#include "DefaultAbstractScene.hpp"

namespace Scene
{
    template<
    // 連想配列の割り当てを行うクラスを指定する．
    // 静的なメンバ関数Assignを実装する必要がある．
    template<class> typename Assignment,
    
    // シーン抽象クラスを指定する．
    typename AbstractScene = DefaultAbstractScene
    >
    class SceneManager{
    private:
        typedef String KeyType;
        // typedef std::shared_ptr<AbstractScene> SPAbs;
        typedef std::unique_ptr<AbstractScene> UPAbs;
        typedef std::unordered_map<KeyType, UPAbs> Assoc;
        Assoc strategy;
        KeyType current_;
        
    public:
        SceneManager()
        {
            this -> current_ = Assignment<AbstractScene>::Assign(this -> strategy);
        }
        
        void Draw()
        {
            strategy[this->current_] -> Draw();
        }
        
        void Update()
        {
            strategy[this -> current_] -> Update();
            this -> current_ = strategy[this -> current_] -> GetNextScene();
        }
    };
}

#endif /* SceneManager_hpp */
