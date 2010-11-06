// 
// CoreDockPrivate.h
// Header file for undocumented Dock SPI
// 
// Arranged by Tony Arnold
// Based on CoreDockPrivate.h from http://www.cocoadev.com/index.pl?DockPrefsPrivate
// 
// Contributors:
//   Alacatia Labs: Initial version posted at http://www.cocoadev.com/index.pl?DockPrefsPrivate
//   Tony Arnold: CoreDockGetWorkspacesEnabled, CoreDockSetWorkspacesEnabled, CoreDockSetWorkspacesCount
//   Steve Voida: CoreDockGetWorkspacesCount
// 
// Changes:
//   1.1 - Added attribution for Alacatia labs as originator
//       - Removed unnecessary reliance on CGSPrivate.h
//   1.0 - Initial release
// 

#ifdef __cplusplus
extern "C" {
#endif
  
typedef enum {
    kCoreDockOrientationTop = 1,
    kCoreDockOrientationBottom = 2,
    kCoreDockOrientationLeft = 3,
    kCoreDockOrientationRight = 4
} CoreDockOrientation;

typedef enum {
    kCoreDockPinningStart = 1,
    kCoreDockPinningMiddle = 2,
    kCoreDockPinningEnd = 3
} CoreDockPinning;

typedef enum {
    kCoreDockEffectGenie = 1,
    kCoreDockEffectScale = 2,
    kCoreDockEffectSuck = 3
} CoreDockEffect;

extern float CoreDockGetTileSize(void);
extern void CoreDockSetTileSize(float tileSize);

extern void CoreDockGetOrientationAndPinning(CoreDockOrientation *outOrientation, CoreDockPinning *outPinning);
extern void CoreDockSetOrientationAndPinning(CoreDockOrientation orientation, CoreDockPinning pinning);

extern void CoreDockGetEffect(CoreDockEffect *outEffect);
extern void CoreDockSetEffect(CoreDockEffect effect);

extern Boolean CoreDockGetAutoHideEnabled(void);
extern void CoreDockSetAutoHideEnabled(Boolean flag);

extern Boolean CoreDockIsMagnificationEnabled(void);
extern void CoreDockSetMagnificationEnabled(Boolean flag);

extern float CoreDockGetMagnificationSize(void);
extern void CoreDockSetMagnificationSize(float newSize);

extern Boolean CoreDockGetWorkspacesEnabled(void);
extern void CoreDockSetWorkspacesEnabled(Boolean);

extern void CoreDockGetWorkspacesCount(int *rows, int *columns);
extern void CoreDockSetWorkspacesCount(int rows, int columns);

#ifdef __cplusplus
}
#endif
