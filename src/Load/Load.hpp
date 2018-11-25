//
//  Load.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/03.
//

#ifndef Load_hpp
#define Load_hpp

#include "singleton.hpp"

class Load : public Singleton<Load>
{
private:
    friend class Singleton<Load>;

public:
    bool isGameFirstFrag = false;   //ゲームが「初めから」開始されたかどうか管理する
};

#endif /* Load_hpp */
