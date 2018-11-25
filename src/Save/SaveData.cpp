//
//  Save.cpp
//  empty
//
//  Created by 三浦真矢 on 2018/11/02.
//

#include "SaveData.hpp"

String SaveData::m_mainCharaName = U"";

String SaveData::getMainCharaName()
{
    return m_mainCharaName;
}

void SaveData::setMainCharaName(String charaName)
{
    m_mainCharaName = charaName;
}
