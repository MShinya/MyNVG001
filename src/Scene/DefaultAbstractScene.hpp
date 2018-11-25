//
//  DefaultAbstractClass.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/10/31.
//

#ifndef DefaultAbstractScene_hpp
#define DefaultAbstractScene_hpp

#include <Siv3D.hpp>

namespace Scene
{
    class DefaultAbstractScene{
    public:
        virtual void Draw() = 0;
        
        virtual void Update() = 0;
        
        virtual String GetScene() = 0;
        
        String GetNextScene();
        
        void SetNextScene(String);
        
        virtual ~DefaultAbstractScene(){};
    protected:
        String next_;
    };
}

#endif /* DefaultAbstractScene_hpp */
