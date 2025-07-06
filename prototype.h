//************************************
// 関数のプロトタイプ宣言
//************************************



void title();			// タイトル画面
void Handle_load();		// 各種ハンドルを読み込む
void initialize();		// フィールドを初期化する
void player_select();	// 各要素とマウスの座標判定とプレイヤーの座標選択
void draw_field();		// フィールドを描画
void draw_color(int index);		// 要素に色をつける  index = 1 で現在選択可能なマスに薄く色を付ける
void flash_bingo(int player);		// ビンゴ列を点滅させる
int checkDirection(int x, int y, int z, int dx, int dy, int dz, int player);	// 縦横斜めに陣地が4つ並んでいるかの判定
bool checkWin(int player);	// 勝利判定　 111 or 222 をひきすうで渡す
float crossProduct(float x1, float y1, float x2, float y2, int px, int py);	// クロス積を使って判定する関数
void ending(int index);

int reset_debug();		// フィールドを全リセット

void com_select();		// ＣＯＭの座標選択
int maxLevel(int alpha, int beta, int depth);	// ＣＯＭの最善手を選択（ＣＯＭのスコアが一番高い指し手）
int minLevel(int alpha, int beta, int depth);	// プレイヤーの最善手を選択（ＣＯＭのスコアが一番低い指し手）
int evaluation_function(int x, int y, int z);	// 評価関数
void checkDirectionCollect(int x, int y, int z, int* totalScore);	// checkDirection() を呼び出す処理をまとめた関数　ビンゴになりえるラインの総数から、すでに対戦相手に阻止されているラインの総数を引く
int checkReach(int player, int evalution);	// リーチを検出してビンゴを防いだり完成させたりする　引数(evalution)は評価関数からの呼び出しかを判定するのに使う