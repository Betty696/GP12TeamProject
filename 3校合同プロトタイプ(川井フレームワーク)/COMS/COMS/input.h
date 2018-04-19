//=============================================================================
//
// ���̓w�b�_�[ [input.h]
// Author : Kei Shionuma
//
//=============================================================================
#ifndef _INPUT_H_
#define _INPUT_H_

#include "main.h"


//*****************************************************************************
// �}�N����`
//*****************************************************************************

// �v���O������������Ƃ��Ɏg��
#define	USE_KEYBOARD										// �錾����ƃL�[�{�[�h�ő���\�ɂȂ�
#define	USE_MOUSE											// �錾����ƃ}�E�X�ő���\�ɂȂ�
#define	USE_PAD												// �錾����ƃp�b�h�ő���\�ɂȂ�


//�Q�[���p�b�h���
#define BUTTON_UP			0x00000001l	// �����L�[��(.IY<0)
#define BUTTON_DOWN			0x00000002l	// �����L�[��(.IY>0)
#define BUTTON_LEFT			0x00000004l	// �����L�[��(.IX<0)
#define BUTTON_RIGHT		0x00000008l	// �����L�[�E(.IX>0)
#define RSTICK_UP			0x00000010l	// ���X�e�B�b�N��|������(IRz<0)
#define RSTICK_DOWN			0x00000020l	// ���X�e�B�b�N���|������(IRz>0)
#define RSTICK_LEFT			0x00000040l	// ���X�e�B�b�N���|������(IZ>0)
#define RSTICK_RIGHT		0x00000080l	// ���X�e�B�b�N�E�|������(IRz<0)
#define BUTTON_A			0x00000100l	// �`(��)�{�^��(.rgbButtons[0]&0x80)
#define BUTTON_B			0x00000200l	// �a(�~)�{�^��(.rgbButtons[1]&0x80)
#define BUTTON_C			0x00000400l	// �b(��)�{�^��(.rgbButtons[2]&0x80)
#define BUTTON_X			0x00000800l	// �w(��)�{�^��(.rgbButtons[3]&0x80)
#define BUTTON_L1			0x00001000l	// �x(L1)�{�^��(.rgbButtons[4]&0x80)
#define BUTTON_R1			0x00002000l	// �y(R1)�{�^��(.rgbButtons[5]&0x80)
#define BUTTON_L2			0x00004000l	// �k(L2)�{�^��(.rgbButtons[6]&0x80)
#define BUTTON_R2			0x00008000l	// �q(R2)�{�^��(.rgbButtons[7]&0x80)
#define BUTTON_SHARE		0x00010000l	// SHARE�{�^��(.rgbButtons[8]&0x80)
#define BUTTON_OPTION		0x00020000l	// �l�{�^��(.rgbButtons[9]&0x80)
#define BUTTON_L3			0x00040000l	// ���X�e�B�b�N��������(.rgbButtons[10]&0x80)
#define BUTTON_R3			0x00080000l	// �E�X�e�B�b�N��������(.rgbButtons[11]&0x80)
#define BUTTON_PS			0x00100000l	// PS�{�^����������(.rgbButtons[12]&0x80)
#define BUTTON_TOUCH		0x00200000l	// �^�b�`�p�b�h��������(.rgbButtons[13]&0x80)
#define GAMEPADMAX			(4)			// �����ɐڑ�����W���C�p�b�h�̍ő吔���Z�b�g


//*****************************************************************************
// �v���g�^�C�v�錾
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
BOOL IsMouseLeftPressed(void);      // ���N���b�N�������
BOOL IsMouseLeftTriggered(void);    // ���N���b�N�����u��
BOOL IsMouseRightPressed(void);     // �E�N���b�N�������
BOOL IsMouseRightTriggered(void);   // �E�N���b�N�����u��
BOOL IsMouseCenterPressed(void);    // ���N���b�N�������
BOOL IsMouseCenterTriggered(void);  // ���N���b�N�����u��
long GetMouseX(void);               // �}�E�X��X�����ɓ��������Βl
long GetMouseY(void);               // �}�E�X��Y�����ɓ��������Βl
long GetMouseZ(void);               // �}�E�X�z�C�[�������������Βl

									//---------------------------- game pad
BOOL IsButtonPressed(int padNo, DWORD button);
BOOL IsButtonTriggered(int padNo, DWORD button);


#endif