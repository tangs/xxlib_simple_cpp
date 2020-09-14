//
// Created by tangs on 2020/9/14.
//

#include "xx_behaviour.h"

#include <iostream>

namespace xx {
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
}