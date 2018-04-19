//=============================================================================
//
// 入力ヘッダー [input.h]
// Author : Kei Shionuma
//
//=============================================================================
#ifndef _INPUT_H_
#define _INPUT_H_

#include "main.h"


//*****************************************************************************
// マクロ定義
//*****************************************************************************

// プログラム分けするときに使う
#define	USE_KEYBOARD										// 宣言するとキーボードで操作可能になる
#define	USE_MOUSE											// 宣言するとマウスで操作可能になる
#define	USE_PAD												// 宣言するとパッドで操作可能になる


//ゲームパッド情報
#define BUTTON_UP			0x00000001l	// 方向キー上(.IY<0)
#define BUTTON_DOWN			0x00000002l	// 方向キー下(.IY>0)
#define BUTTON_LEFT			0x00000004l	// 方向キー左(.IX<0)
#define BUTTON_RIGHT		0x00000008l	// 方向キー右(.IX>0)
#define RSTICK_UP			0x00000010l	// 左スティック上倒しこみ(IRz<0)
#define RSTICK_DOWN			0x00000020l	// 左スティック下倒しこみ(IRz>0)
#define RSTICK_LEFT			0x00000040l	// 左スティック左倒しこみ(IZ>0)
#define RSTICK_RIGHT		0x00000080l	// 左スティック右倒しこみ(IRz<0)
#define BUTTON_A			0x00000100l	// Ａ(□)ボタン(.rgbButtons[0]&0x80)
#define BUTTON_B			0x00000200l	// Ｂ(×)ボタン(.rgbButtons[1]&0x80)
#define BUTTON_C			0x00000400l	// Ｃ(○)ボタン(.rgbButtons[2]&0x80)
#define BUTTON_X			0x00000800l	// Ｘ(△)ボタン(.rgbButtons[3]&0x80)
#define BUTTON_L1			0x00001000l	// Ｙ(L1)ボタン(.rgbButtons[4]&0x80)
#define BUTTON_R1			0x00002000l	// Ｚ(R1)ボタン(.rgbButtons[5]&0x80)
#define BUTTON_L2			0x00004000l	// Ｌ(L2)ボタン(.rgbButtons[6]&0x80)
#define BUTTON_R2			0x00008000l	// Ｒ(R2)ボタン(.rgbButtons[7]&0x80)
#define BUTTON_SHARE		0x00010000l	// SHAREボタン(.rgbButtons[8]&0x80)
#define BUTTON_OPTION		0x00020000l	// Ｍボタン(.rgbButtons[9]&0x80)
#define BUTTON_L3			0x00040000l	// 左スティック押し込み(.rgbButtons[10]&0x80)
#define BUTTON_R3			0x00080000l	// 右スティック押し込み(.rgbButtons[11]&0x80)
#define BUTTON_PS			0x00100000l	// PSボタン押し込み(.rgbButtons[12]&0x80)
#define BUTTON_TOUCH		0x00200000l	// タッチパッド押し込み(.rgbButtons[13]&0x80)
#define GAMEPADMAX			(4)			// 同時に接続するジョイパッドの最大数をセット


//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitInput(HINSTANCE hInst, HWND hWnd);
void UninitInput(void);
void UpdateInput(void);

//---------------------------- keyboard
bool GetKeyboardPress(int nKey);
bool GetKeyboardTrigger(int nKey);
bool GetKeyboardRepeat(int nKey);
bool GetKeyboardRelease(int nKey);

//---------------------------- mouse
BOOL IsMouseLeftPressed(void);      // 左クリックした状態
BOOL IsMouseLeftTriggered(void);    // 左クリックした瞬間
BOOL IsMouseRightPressed(void);     // 右クリックした状態
BOOL IsMouseRightTriggered(void);   // 右クリックした瞬間
BOOL IsMouseCenterPressed(void);    // 中クリックした状態
BOOL IsMouseCenterTriggered(void);  // 中クリックした瞬間
long GetMouseX(void);               // マウスがX方向に動いた相対値
long GetMouseY(void);               // マウスがY方向に動いた相対値
long GetMouseZ(void);               // マウスホイールが動いた相対値

									//---------------------------- game pad
BOOL IsButtonPressed(int padNo, DWORD button);
BOOL IsButtonTriggered(int padNo, DWORD button);


#endif