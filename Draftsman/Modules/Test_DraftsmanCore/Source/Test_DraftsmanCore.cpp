/***************************************************************************************
 *
 *   Test_DraftsmanCore
 *__________________
 *
 * @file Test_DraftsmanCore.cpp
 * @author Clement BERTHAUD <code@clementberthaud.com>
 * @date 16/12/2018
 * @brief Implementation of DraftsmanCore Test Executable
 * @licence MIT License - Copyright (c) 2018-2019 Draftsman - Clement BERTHAUD <code@clementberthaud.com>
 */

#include "Test_DraftsmanCore.hpp"


#include <iostream>


#include <tinyxml2.h>


#include <DCConfig>
#include <DCGraph>
#include <DCNode>


namespace DC = ::DraftsmanCore;


#ifdef TEST_DRAFTSMANCORE


int main()
{
    ::tinyxml2::XMLDocument xmlDoc;
    ::tinyxml2::XMLNode * pRoot = xmlDoc.NewElement("Root");
    xmlDoc.InsertFirstChild(pRoot);
    ::tinyxml2::XMLElement * pElement = xmlDoc.NewElement("IntValue");
    pElement->SetText(10);
    pRoot->InsertEndChild(pElement);
    ::DC::Config::test_uuid( 16 );

    while(true)
    {
    }

    return  0;
}


#endif // TEST_DRAFTSMANCORE
