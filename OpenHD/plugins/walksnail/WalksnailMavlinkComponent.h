#include "routing/MavlinkComponent.hpp"


class WalksnailMavlinkComponent : public MavlinkComponent
{
    WalksnailMavlinkComponent(uint8_t sys_id, uint8_t comp_id);

    std::vector<MavlinkMessage> process_mavlink_messages(
        std::vector<MavlinkMessage> messages
    ) override;

    std::vector<MavlinkMessage> generate_mavlink_messages() override;
};
