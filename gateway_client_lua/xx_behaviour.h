//
// Created by tangs on 2020/9/14.
//

#ifndef ALL_XX_BEHAVIOUR_H
#define ALL_XX_BEHAVIOUR_H

#include <functional>

namespace xx {
    struct Behaviour {
        virtual void Awake() = 0;
        virtual void Start() = 0;
        virtual void Update() = 0;
        virtual void OnEnable() = 0;
        virtual void OnDisable() = 0;
        virtual void OnDestroy() = 0;
    };

    struct Behaviour_cxx : public Behaviour {
        void Awake();
        void Start();
        void Update();
        void OnEnable();
        void OnDisable();
        void OnDestroy();
    };

    struct Behaviour_lua : public Behaviour {
        std::function<void()> onAwake;

        void Awake();
        void Start();
        void Update();
        void OnEnable();
        void OnDisable();
        void OnDestroy();
    };
}

#endif //ALL_XX_BEHAVIOUR_H
