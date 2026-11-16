#pragma once

#ifdef INSTALLERCONTROL_BUILD
    #define IC_API __declspec(dllexport)
#else
    #define IC_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

// DLL-side error codes
#define IC_WINDOW_NOT_FOUND  (-1)
#define IC_REGISTER_FAILED   (-2)
#define IC_SEND_FAILED       (-3)
#define IC_INVALID_RESPONSE  (-4)

// Sends a progress value (0..100) to a window titled "Installer".
// Returns the receiver's response code, or one of the negative
// IC_* error codes above.
IC_API int SendInstallerProgress(int progress);

#ifdef __cplusplus
}
#endif
