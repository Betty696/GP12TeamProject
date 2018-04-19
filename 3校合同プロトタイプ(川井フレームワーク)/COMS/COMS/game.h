//=============================================================================
//
// ゲームモードの処理 [game.h]
// Author : 川井一生
// 改変者 : 藤田高輔
// 改変内容 : ゲーム内環境の追加など
//
//=============================================================================
#ifndef _GAME_H_
#define _GAME_H_

#include "main.h"


//=============================================================================
// マクロ定義
#define GRAVITY					(0.25)
#define WEEK_NUM_PROTO_MAX		(5)		//プロトタイプ難易度における最大の週数

//難易度のタイプ
typedef enum
{
	DIFFICULT_NULL = -1,	//難易度が選択されてない状態
	DIFFICULT_PROTO,		//プロトタイプ
	DIFFICULT_MAX	//難易度最大数
}DIFFICULT;

//=============================================================================
// 構造体宣言
typedef struct //ゲーム本編を制御するもの（経過週数、難易度）
{
	int week_cnt;				//経過週数
	DIFFICULT difficult = DIFFICULT_NULL;	//選択された難易度
}GAME;

//=============================================================================
// プロトタイプ宣言
void InitGame(int oldMode);
void UninitGame(int oldMode);
void UpdateGame(void);
void DrawGame(void);
void SetDifficult(DIFFICULT difficult);
GAME* GetGame(void)
#endif
