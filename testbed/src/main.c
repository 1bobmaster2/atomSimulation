#include <core/logger.h>
#include <core/asserts.h>
#include <platform/platform.h>

int main(void) {
    KFATAL("A test message: %f", 3.14f);
    KERROR("A test message: %f", 3.14f);
    KWARN("A test message: %f", 3.14f);
    KINFO("A test message: %f", 3.14f);
    KDEBUG("A test message: %f", 3.14f);
    KTRACE("A test message: %f", 3.14f);

    platform_state state;
    if(platform_startup(&state, "HELLO THIS IS A TEST", 100, 100, 1200, 720))
    {
        while(TRUE)
        {
            platform_pump_messages(&state);
        }
    }
    platform_shutdown(&state);

    return 0;
}