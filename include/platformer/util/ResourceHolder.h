#pragma once
#include <map>
#include <memory>
#include <string>


namespace util {
    template <typename Resource, typename Identifier>
    class ResourceHolder {
    public:
        void load(Identifier id, const std::pmr::string& filename);
        Resource& get(Identifier id);
        const Resource& get(Identifier id) const;
    private:
        std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
    };
}
