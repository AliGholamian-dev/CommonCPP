#pragma once

namespace Common
{

    template <typename... Args>
    constexpr void unused(Args&&...) noexcept {}

}

#define unused(x) ((void)(x))
