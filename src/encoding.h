#ifndef SCREEN_ENCODING_H
#define SCREEN_ENCODING_H

#include "window.h"
#include <stdio.h>
#include <wchar.h>

void  InitBuiltinTabs (void);
struct mchar *recode_mchar (struct mchar *, int, int);
struct mline *recode_mline (struct mline *, int, int, int);
int   FromUtf8 (int, int *);
void  AddUtf8 (int);
int   ToUtf8 (char *, int);
int   ToUtf8_comb (char *, int);
int   utf8_isdouble (int);
int   utf8_iscomb (int);
void  utf8_handle_comb (unsigned int, struct mchar *);
int   ContainsSpecialDeffont (struct mline *, int, int, int);
int   LoadFontTranslation (int, char *);
void  LoadFontTranslationsForEncoding (int);
void  WinSwitchEncoding (Window *, int);
int   FindEncoding (char *);
char *EncodingName (int);
int   EncodingDefFont (int);
void  ResetEncoding (Window *);
int   CanEncodeFont (int, int);
int   DecodeChar (int, int, int *);
int   RecodeBuf (unsigned char *, int, int, int, unsigned char *);
int   PrepareEncodedChar (int);
int   EncodeChar (char *, int, int, int *);

int utf8_width(char *buf);
int utf8_size(char* buf);

#endif /* SCREEN_ENCODING_H */
