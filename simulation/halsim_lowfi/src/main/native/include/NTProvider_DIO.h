/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <HALSimLowFi.h>

class HALSimNTProviderDIO : public HALSimNTProvider {
public:
    virtual void Initialize() override;
    virtual void OnCallback(uint32_t channel, std::shared_ptr<nt::NetworkTable> table) override;
    virtual void OnInitializedChannel(uint32_t channel, std::shared_ptr<nt::NetworkTable> table) override;
};