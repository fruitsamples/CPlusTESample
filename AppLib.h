/*------------------------------------------------------------------------------------------	Program:	CPlusTESample 2.0	File:		AppLib.h	by Andrew Shebanow	of Apple Macintosh Developer Technical Support	Copyright � 1989-1990 Apple Computer, Inc.	All rights reserved.------------------------------------------------------------------------------------------*/#ifndef __APPLIB__#define __APPLIB__/*	These definitions are shared by Rez and C++. We use #define statements	instead of constants in this file because Rez doesn't support constants. *//* Some constants for resource ID's */#define kErrStrings			128				/* error string list */#define kBuzzwordStrings	129				/* list of buzzwords */#define kSysErrStrings		130				/* system error strings */#define	rUserAlert			129				/* user error alert */#define rSaveAlert			130				/* do you wanna save? alert *//* The following are indicies into our error STR# resource. */#define	eWrongMachine		1#define	eSmallSize			2#define eCannotOpenDoc		3#define eCannotReadDoc		4/* indices into buzzwords string resource */#define bQuitting			1#define bClosing			2#endif