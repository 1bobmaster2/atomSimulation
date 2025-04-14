#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("A test message: %f", 3.14f);
    KERROR("A test message: %f", 3.14f);
    KWARN("A test message: %f", 3.14f);
    KINFO("A test message: %f", 3.14f);
    KDEBUG("A test message: %f", 3.14f);
    KTRACE("A test message: %f", 3.14f);

    //test
    KASSERT_MSG(1 == 1, "hi");

    return 0;
}