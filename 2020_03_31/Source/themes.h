//HEADER_GOES_HERE
#ifndef __THEMES_H__
#define __THEMES_H__

extern int numthemes; // idb
extern BOOL armorFlag; // weak
extern int ThemeGoodIn[4];
extern BOOL weaponFlag; // weak
extern BOOL treasureFlag; // weak
extern BOOL mFountainFlag; // weak
extern BOOL cauldronFlag; // weak
extern BOOL tFountainFlag; // weak
extern int zharlib; // weak
extern int themex; // idb
extern int themey; // idb
extern int themeVar1; // idb
extern ThemeStruct themes[MAXTHEMES];
extern BOOL pFountainFlag; // weak
extern BOOL bFountainFlag; // weak
extern BOOL bCrossFlag; // weak

_bool TFit_Shrine(int i);
_bool TFit_Obj5(int t);
_bool TFit_SkelRoom(int t);
_bool TFit_GoatShrine(int t);
_bool CheckThemeObj3(int xp, int yp, int t, int f);
_bool TFit_Obj3(int t);
_bool CheckThemeReqs(int t);
_bool SpecialThemeFit(int i, int t);
_bool CheckThemeRoom(int tv);
void InitThemes();
void HoldThemeRooms();
void PlaceThemeMonsts(int t, int f);
void Theme_Barrel(int t);
void Theme_Shrine(int t);
void Theme_MonstPit(int t);
void Theme_SkelRoom(int t);
void Theme_Treasure(int t);
void Theme_Library(int t);
void Theme_Torture(int t);
void Theme_BloodFountain(int t);
void Theme_Decap(int t);
void Theme_PurifyingFountain(int t);
void Theme_ArmorStand(int t);
void Theme_GoatShrine(int t);
void Theme_Cauldron(int t);
void Theme_MurkyFountain(int t);
void Theme_TearFountain(int t);
void Theme_BrnCross(int t);
void Theme_WeaponRack(int t);
void UpdateL4Trans();
void CreateThemeRooms();

/* rdata */

extern int ThemeGood[4];
extern int trm5x[25];
extern int trm5y[25];
extern int trm3x[9];
extern int trm3y[9];

#endif /* __THEMES_H__ */
