/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBTextBlock : NSObject {
}

+ (void)applyTextRuler:(struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; }*)arg1 toTextBlock:(id)arg2;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)readFromStyledText:(struct __CFAttributedString { }*)arg1 toStyledPargraphs:(struct __CFArray { }*)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString { }*)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString { }*)arg2 textType:(int)arg3 state:(id)arg4;

@end
