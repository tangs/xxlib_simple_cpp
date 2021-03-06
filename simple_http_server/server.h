﻿#pragma once
#include "xx_epoll.h"

namespace EP = xx::Epoll;

// 预声明
struct HListener;

// 服务本体
struct Server : EP::Context {
    // 透传构造函数
    using EP::Context::Context;

    // run 前创建 listener 啥的. run 后清除
    int Run() override;

	// 监听器
	std::shared_ptr<HListener> listener;

    // 随便来点帧逻辑
    int FrameUpdate() override;
};
