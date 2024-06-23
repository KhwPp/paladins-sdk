#include "paladins.hpp"

int __stdcall DllMain(_In_ HINSTANCE instance, _In_ DWORD reason, _In_ LPVOID reserved) {
    if (reason != DLL_PROCESS_ATTACH)
        return 0;

    std::jthread{ []() {
        paladins::g_context->init();
    } }.detach();

    return 1;
}

namespace paladins {

    bool pre_init() {
        return false;
    }
    void context::init() {
        pre_init();
    }
}