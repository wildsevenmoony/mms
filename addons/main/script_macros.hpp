/*
 * Author: Moony
 * Shared preprocessor helpers for quoting, naming, and addon file paths.
 */

#define QUOTE(var1) #var1

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3

#define ADDON DOUBLES(PREFIX,COMPONENT)
#define QADDON QUOTE(ADDON)

#define GVAR(var1) DOUBLES(ADDON,var1)
#define QGVAR(var1) QUOTE(GVAR(var1))

#define PATHTOF_SYS(var1,var2,var3) \z\var1\addons\var2\var3
#define PATHTOF(var1) QUOTE(PATHTOF_SYS(mms,COMPONENT,var1))
