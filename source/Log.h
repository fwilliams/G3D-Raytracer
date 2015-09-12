/** \file Log.h */

#include <G3D/G3DAll.h>

#ifndef Log_h
#define Log_h

/**
 * Write to the G3D log with the prefix "Raytracer: "
 */
#define rtLog(fmt, ...) G3D::logPrintf("Raytracer: " fmt, ##__VA_ARGS__)

/**
 * Write to the G3D log with the prefix "Raytracer: " and a newline appended to
 * the end of the log string
 */
#define rtLogLn(fmt, ...) G3D::logPrintf("Raytracer: " fmt "\n", ##__VA_ARGS__)


/**
 * The same as rtLog and rtLogLn except will only write to the log when
 * the program is compiled in debug mode
 *
 * \see rtLog, rtLogLn
 */
#ifdef _DEBUG
#define rtDebugLog(fmt, ...) G3D::logPrintf("Raytracer: " fmt, ##__VA_ARGS__);
#define rtDebugLogLn(fmt, ...) G3D::logPrintf("Raytracer: " fmt "\n", ##__VA_ARGS__);
#else
#define rtDebugLog(fmt, ...) ((void)0)
#define rtDebugLogLn(fmt, ...) ((void)0)
#endif

#endif
