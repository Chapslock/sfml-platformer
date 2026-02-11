#include <platformer/core/CommandQueue.h>

void core::CommandQueue::push(const Command& command)
{
    mQueue.push(command);
}

core::Command core::CommandQueue::pop()
{
    Command command = mQueue.front();
    mQueue.pop();
    return command;
}

bool core::CommandQueue::isEmpty() const
{
    return mQueue.empty();
}
