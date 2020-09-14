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
        Behaviour_cxx() = default;
        Behaviour_cxx(Behaviour_cxx const &) = delete;
        Behaviour_cxx &operator=(Behaviour_cxx const &) = delete;

        void Awake() override;
        void Start() override;
        void Update() override;
        void OnEnable() override;
        void OnDisable() override;
        void OnDestroy() override;
    };

    struct Behaviour_lua : public Behaviour {
        Behaviour_lua() = default;
        Behaviour_lua(Behaviour_lua const &) = delete;
        Behaviour_lua &operator=(Behaviour_lua const &) = delete;

        std::function<void()> awake;
        std::function<void()> start;
        std::function<void()> update;
        std::function<void()> on_enable;
        std::function<void()> on_disable;
        std::function<void()> on_destroy;

        void Awake() override;
        void Start() override;
        void Update() override;
        void OnEnable() override;
        void OnDisable() override;
        void OnDestroy() override;
    };
}

#endif //ALL_XX_BEHAVIOUR_H
