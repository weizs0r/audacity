/*
* Audacity: A Digital Audio Editor
*/
#pragma once

#include "effects/ieffectsconfiguration.h"

#include "modularity/ioc.h"
#include "global/iglobalconfiguration.h"

namespace au::effects {
class EffectsConfiguration : public IEffectsConfiguration
{
    muse::Inject<muse::IGlobalConfiguration> globalConfiguration;

public:
    EffectsConfiguration() = default;

    muse::io::path_t defaultPath() const override;
};
}
