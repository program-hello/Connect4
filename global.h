//**********************************
// グローバル変数
//**********************************

int FHandle[5];		// フォントハンドル
int CHandle[8];		// 色ハンドル　ＲＧＢ
int mode = 0;		// プレイヤー対ＣＯＭなどの選択用	０：プレイヤー対プレイヤー　１：プレイヤー対ＣＯＭ
int timesCnt = 0;	// 現在何手目かをカウントする
int depthNow;		// 探索の深さ
int depthNum;		// 探索する最大局面数までカウント（あらかじめ設定した局面数を常に探索）
int randomFreq = 2;	// ランダムに駒を打つ確率  ( 1 / randomFreq )

int mx, my;			// マウスの座標
int index;			// 関数 fill() を呼び出すときに何色で塗りつぶすかを識別する
int sengo = 1;		// プレイヤーが先手か後手か　１：先手　２：後手
int playerFlag = 1;	// 手番判定フラグ	// １：プレイヤー　２：ＣＯＭ
int clickFlag = 0;	// マウスが押されているかのフラグ
int finishFlag1 = 0;	// 陣地が４つ並んだかの判定フラグ（プレイヤー）
int finishFlag2 = 0;	// 陣地が４つ並んだかの判定フラグ（ＣＯＭ）

int gameF[4][4][4];	// フィールドの全要素  game field	０：置ける　１：置けない
int bingoX[4], bingoY[4], bingoZ[4];		// ビンゴのラインを形成する座標を格納

int plusX = 100, plusY = 50;		// ひとつ隣の点に移動する際の増加分

// 平行四辺形の基準の４点
float x1 = BASIS_X,			 y1 = BASIS_Y;			 // 左下（基準点）
float x2 = x1 + plusX,   y2 = y1;		 // 右下
float x3 = x2 + 40,		 y3 = y1 - plusY; // 右上		// x1 と x2 のｘ軸の差は４０
float x4 = x1 + 40,		 y4 = y1 - plusY; // 左上

// フィールドの基準の４点（大きい平行四辺形の４角）
float fieldX1 = x1, fieldY1 = y1;			// 左下
float fieldX2 = fieldX1 + (x2 - x1) * 4, fieldY2 = y1;	// 右下
float fieldX3 = fieldX2 + (x3 - x2) * 4, fieldY3 = y1 - (y1 - y3) * 4;	// 右上
float fieldX4 = x1 + (x4 - x1) * 4, fieldY4 = y1 - (y1 - y3) * 4;		// 左上
/* 右に１つ進む + 100, 上に１つ進む + 50 
 * x1 と x4 のｘ軸の差は４０*/

float cross1, cross2, cross3, cross4;	// 外積計算の結果を格納

int bestX = 0, bestY = 0, bestZ = 0;	// ＣＯＭの最善手の座標
int PreachX = 0, PreachY = 0, PreachZ = 0;	// プレイヤーのリーチ検出用（）
int PreachFlag;				// checkReach() で使うリーチ完成のための最後の座標に駒が置けるか置けないかのフラグ


// debug 用
int GHandle[3];
int hintoFlag = 0;	// ヒントボタンが押されたかどうかの判定　1 = player のリーチ判定 , 2 = com のリーチ判定 , 3 = 最善手
int hintoX = 0, hintoY = 0, hintoZ = 0;		// ヒントの座標
int cntCant = 1;	// ヒントの際の、プレイヤーの思考ルーチンの探索の深さの指定に使う
int cant = 0;

int bestXX;
int bestYY;
int bestZZ;