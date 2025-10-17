#pragma once

namespace simple_cache {

template<typename KEY, typename VALUE>
class ICache{
public:
    virtual ~ICache() = default;

    virtual void put(const KEY& key, const VALUE& value) = 0;

    virtual VALUE get(const KEY& key) = 0;

    virtual bool get(const KEY& key, VALUE& value) = 0;
};

}