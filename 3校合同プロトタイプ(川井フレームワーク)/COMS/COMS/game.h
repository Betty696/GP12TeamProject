//=============================================================================
//
// �Q�[�����[�h�̏��� [game.h]
// Author : ���ꐶ
// ���ώ� : ���c����
// ���ϓ��e : �Q�[�������̒ǉ��Ȃ�
//
//=============================================================================
#ifndef _GAME_H_
#define _GAME_H_

#include "main.h"


//=============================================================================
// �}�N����`
#define GRAVITY					(0.25)
#define WEEK_NUM_PROTO_MAX		(5)		//�v���g�^�C�v��Փx�ɂ�����ő�̏T��

//��Փx�̃^�C�v
typedef enum
{
	DIFFICULT_NULL = -1,	//��Փx���I������ĂȂ����
	DIFFICULT_PROTO,		//�v���g�^�C�v
	DIFFICULT_MAX	//��Փx�ő吔
}DIFFICULT;

//=============================================================================
// �\���̐錾
typedef struct //�Q�[���{�҂𐧌䂷����́i�o�ߏT���A��Փx�j
{
	int week_cnt;				//�o�ߏT��
	DIFFICULT difficult = DIFFICULT_NULL;	//�I�����ꂽ��Փx
}GAME;

//=============================================================================
// �v���g�^�C�v�錾
void InitGame(int oldMode);
void UninitGame(int oldMode);
void UpdateGame(void);
void DrawGame(void);
void SetDifficult(DIFFICULT difficult);
GAME* GetGame(void)
#endif
