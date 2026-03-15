#include "WalksnailMavlinkComponent.h"
#include <iostream>

WalksnailMavlinkComponent::WalksnailMavlinkComponent(
    uint8_t sys_id
) : MavlinkComponent(sys_id, MAV_COMP_ID_ONBOARD_COMPUTER)
{
}

std::vector<MavlinkMessage> WalksnailMavlinkComponent::process_mavlink_messages(
    std::vector<MavlinkMessage> messages)
{
    std::cout << "WSMC process" << std::endl;
    std::vector<MavlinkMessage> ret;
    return ret;
}

std::vector<MavlinkMessage> WalksnailMavlinkComponent::generate_mavlink_messages()
{
    std::cout << "WSMC generate" << std::endl;
    std::vector<MavlinkMessage> ret;

    // optional heartbeat
    ret.push_back(create_heartbeat());

    return ret;
}
