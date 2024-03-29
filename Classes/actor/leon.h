#pragma once
#ifndef __LEON_H__
#define __LEON_H__

#include"cocos2d.h"
#include"const/const.h"
#include"hero.h"

class Leon : public Hero
{
public:
    Leon();
    virtual ~Leon();

    bool init();

    static Leon* create(const char* file);


    //������ʽ
    virtual void attack(Vec2 target);

    void onMouseDown(Event* event);

    virtual void specialAttack(cocos2d::Vec2 target);

    CREATE_FUNC(Leon);

};

#endif