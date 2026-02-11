#pragma once
#include <queue>
#include <platformer/core/Command.h>

namespace core
{
    class CommandQueue
    {
    public:
        void push(const Command& command);
        Command pop();
        bool isEmpty() const;

    private:
        std::queue<Command> mQueue;
    };
}
