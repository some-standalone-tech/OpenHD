#include "WalksnailMavlinkComponent.h"


WalksnailMavlinkComponent::WalksnailMavlinkComponent(
    uint8_t sys_id,
    uint8_t comp_id
) : MavlinkComponent(sys_id, MAV_COMP_ID_ONBOARD_COMPUTER)
{
}

std::vector<MavlinkMessage> WalksnailMavlinkComponent::process_mavlink_messages(
    std::vector<MavlinkMessage> messages)
{
    std::vector<MavlinkMessage> ret;
    return ret;
}

std::vector<MavlinkMessage> WalksnailMavlinkComponent::generate_mavlink_messages()
{
    std::vector<MavlinkMessage> ret;

    // optional heartbeat
    ret.push_back(create_heartbeat());

    return ret;
}
