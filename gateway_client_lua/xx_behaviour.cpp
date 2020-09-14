//
// Created by tangs on 2020/9/14.
//

#include "xx_behaviour.h"

#include <iostream>

namespace xx {
#pragma Behaviour_cxx

    void Behaviour_cxx::Awake() {
        std::cout << "Behaviour_cxx::Awake()." << std::endl;
    }

    void Behaviour_cxx::Start() {
        std::cout << "Behaviour_cxx::Start()." << std::endl;
    }

    void Behaviour_cxx::Update() {
        std::cout << "Behaviour_cxx::Update()." << std::endl;
    }

    void Behaviour_cxx::OnEnable() {
        std::cout << "Behaviour_cxx::OnEnable()." << std::endl;
    }

    void Behaviour_cxx::OnDisable() {
        std::cout << "Behaviour_cxx::OnDisable()." << std::endl;
    }

    void Behaviour_cxx::OnDestroy() {
        std::cout << "Behaviour_cxx::OnDestroy()." << std::endl;
    }

#pragma Behaviour_lua

    void Behaviour_lua::Awake() {
        if (awake) awake();
    }

    void Behaviour_lua::Start() {
        if (start) start();
    }

    void Behaviour_lua::Update() {
        if (update) update();
    }

    void Behaviour_lua::OnEnable() {
        if (on_enable) on_enable();
    }

    void Behaviour_lua::OnDisable() {
        if (on_disable) on_disable();
    }

    void Behaviour_lua::OnDestroy() {
        if (on_destroy) on_destroy();
    }

}