//************************************
// �֐��̃v���g�^�C�v�錾
//************************************



void title();			// �^�C�g�����
void Handle_load();		// �e��n���h����ǂݍ���
void initialize();		// �t�B�[���h������������
void player_select();	// �e�v�f�ƃ}�E�X�̍��W����ƃv���C���[�̍��W�I��
void draw_field();		// �t�B�[���h��`��
void draw_color(int index);		// �v�f�ɐF������  index = 1 �Ō��ݑI���\�ȃ}�X�ɔ����F��t����
void flash_bingo(int player);		// �r���S���_�ł�����
int checkDirection(int x, int y, int z, int dx, int dy, int dz, int player);	// �c���΂߂ɐw�n��4����ł��邩�̔���
bool checkWin(int player);	// ��������@ 111 or 222 ���Ђ������œn��
float crossProduct(float x1, float y1, float x2, float y2, int px, int py);	// �N���X�ς��g���Ĕ��肷��֐�
void ending(int index);

int reset_debug();		// �t�B�[���h��S���Z�b�g

void com_select();		// �b�n�l�̍��W�I��
int maxLevel(int alpha, int beta, int depth);	// �b�n�l�̍őP���I���i�b�n�l�̃X�R�A����ԍ����w����j
int minLevel(int alpha, int beta, int depth);	// �v���C���[�̍őP���I���i�b�n�l�̃X�R�A����ԒႢ�w����j
int evaluation_function(int x, int y, int z);	// �]���֐�
void checkDirectionCollect(int x, int y, int z, int* totalScore);	// checkDirection() ���Ăяo���������܂Ƃ߂��֐��@�r���S�ɂȂ肦�郉�C���̑�������A���łɑΐ푊��ɑj�~����Ă��郉�C���̑���������
int checkReach(int player, int evalution);	// ���[�`�����o���ăr���S��h�����芮���������肷��@����(evalution)�͕]���֐�����̌Ăяo�����𔻒肷��̂Ɏg��