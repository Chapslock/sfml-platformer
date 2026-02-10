#include <platformer/util/ResourceHolder.h>

template <typename Resource, typename Identifier>
void util::ResourceHolder<Resource, Identifier>::load(Identifier id, const std::pmr::string& filename)
{
}

template <typename Resource, typename Identifier>
Resource& util::ResourceHolder<Resource, Identifier>::get(Identifier id)
{
}

template <typename Resource, typename Identifier>
const Resource& util::ResourceHolder<Resource, Identifier>::get(Identifier id) const
{
}
