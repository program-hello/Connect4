//**********************************
// �O���[�o���ϐ�
//**********************************

int FHandle[5];		// �t�H���g�n���h��
int CHandle[8];		// �F�n���h���@�q�f�a
int mode = 0;		// �v���C���[�΂b�n�l�Ȃǂ̑I��p	�O�F�v���C���[�΃v���C���[�@�P�F�v���C���[�΂b�n�l
int timesCnt = 0;	// ���݉���ڂ����J�E���g����
int depthNow;		// �T���̐[��
int depthNum;		// �T������ő�ǖʐ��܂ŃJ�E���g�i���炩���ߐݒ肵���ǖʐ�����ɒT���j
int randomFreq = 2;	// �����_���ɋ��łm��  ( 1 / randomFreq )

int mx, my;			// �}�E�X�̍��W
int index;			// �֐� fill() ���Ăяo���Ƃ��ɉ��F�œh��Ԃ��������ʂ���
int sengo = 1;		// �v���C���[����肩��肩�@�P�F���@�Q�F���
int playerFlag = 1;	// ��Ԕ���t���O	// �P�F�v���C���[�@�Q�F�b�n�l
int clickFlag = 0;	// �}�E�X��������Ă��邩�̃t���O
int finishFlag1 = 0;	// �w�n���S���񂾂��̔���t���O�i�v���C���[�j
int finishFlag2 = 0;	// �w�n���S���񂾂��̔���t���O�i�b�n�l�j

int gameF[4][4][4];	// �t�B�[���h�̑S�v�f  game field	�O�F�u����@�P�F�u���Ȃ�
int bingoX[4], bingoY[4], bingoZ[4];		// �r���S�̃��C�����`��������W���i�[

int plusX = 100, plusY = 50;		// �ЂƂׂ̓_�Ɉړ�����ۂ̑�����

// ���s�l�ӌ`�̊�̂S�_
float x1 = BASIS_X,			 y1 = BASIS_Y;			 // �����i��_�j
float x2 = x1 + plusX,   y2 = y1;		 // �E��
float x3 = x2 + 40,		 y3 = y1 - plusY; // �E��		// x1 �� x2 �̂����̍��͂S�O
float x4 = x1 + 40,		 y4 = y1 - plusY; // ����

// �t�B�[���h�̊�̂S�_�i�傫�����s�l�ӌ`�̂S�p�j
float fieldX1 = x1, fieldY1 = y1;			// ����
float fieldX2 = fieldX1 + (x2 - x1) * 4, fieldY2 = y1;	// �E��
float fieldX3 = fieldX2 + (x3 - x2) * 4, fieldY3 = y1 - (y1 - y3) * 4;	// �E��
float fieldX4 = x1 + (x4 - x1) * 4, fieldY4 = y1 - (y1 - y3) * 4;		// ����
/* �E�ɂP�i�� + 100, ��ɂP�i�� + 50 
 * x1 �� x4 �̂����̍��͂S�O*/

float cross1, cross2, cross3, cross4;	// �O�όv�Z�̌��ʂ��i�[

int bestX = 0, bestY = 0, bestZ = 0;	// �b�n�l�̍őP��̍��W
int PreachX = 0, PreachY = 0, PreachZ = 0;	// �v���C���[�̃��[�`���o�p�i�j
int PreachFlag;				// checkReach() �Ŏg�����[�`�����̂��߂̍Ō�̍��W�ɋ�u���邩�u���Ȃ����̃t���O


// debug �p
int GHandle[3];
int hintoFlag = 0;	// �q���g�{�^���������ꂽ���ǂ����̔���@1 = player �̃��[�`���� , 2 = com �̃��[�`���� , 3 = �őP��
int hintoX = 0, hintoY = 0, hintoZ = 0;		// �q���g�̍��W
int cntCant = 1;	// �q���g�̍ۂ́A�v���C���[�̎v�l���[�`���̒T���̐[���̎w��Ɏg��
int cant = 0;

int bestXX;
int bestYY;
int bestZZ;