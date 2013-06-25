/* exchndl2.cxx
 *
 * A portable way to load the EXCHNDL.DLL on startup.
 *
 * Jose Fonseca
 */

#include <windows.h>

struct ExceptionHandler {
    ExceptionHandler() {
        LoadLibraryA("exchndl.dll");
    }
};

static ExceptionHandler gExceptionHandler;    //  global instance of class
