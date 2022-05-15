/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID FLIESBUZZ = 2861951651U;
        static const AkUniqueID GAMEPLAY_MUSIC = 2322231365U;
        static const AkUniqueID GETPOINTS = 35801126U;
        static const AkUniqueID HEALTHY = 2874639328U;
        static const AkUniqueID POISONED = 1467164614U;
        static const AkUniqueID POWEREDDOWN = 1041311963U;
        static const AkUniqueID POWEREDUP = 4231327868U;
        static const AkUniqueID TONGUECLICK = 3165878815U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace POISONED
        {
            static const AkUniqueID GROUP = 1467164614U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PC_HEALTHY = 1467097536U;
                static const AkUniqueID PC_POISONED = 626737702U;
            } // namespace STATE
        } // namespace POISONED

        namespace POWERUP
        {
            static const AkUniqueID GROUP = 3950429679U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PC_POWEREDDOWN = 3783295931U;
                static const AkUniqueID PC_POWEREDUP = 51599964U;
            } // namespace STATE
        } // namespace POWERUP

    } // namespace STATES

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID ENVIRONMENT = 1229948536U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
