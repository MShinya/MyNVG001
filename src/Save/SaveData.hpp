//
//  Save.hpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#ifndef SaveData_hpp
#define SaveData_hpp

#include <Siv3D.hpp>
#include <time.h>

class SaveData
{
private:
    static String m_mainCharaName;
    time_t m_SaveTime;
    
    
public:
    static String getMainCharaName();
    static void setMainCharaName(String charaName);
};

#endif /* SaveData_hpp */
