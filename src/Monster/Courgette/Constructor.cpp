/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../../include/Monster/Courgette.hpp"

MonsterCourgette::MonsterCourgette(void) {

}

MonsterCourgette::~MonsterCourgette(void) {
    
}

MonsterCourgette* MonsterCourgette::createMonsterCourgette(void) {
    return new MonsterCourgette();
}