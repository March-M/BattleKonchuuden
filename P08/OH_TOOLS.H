/****************************************************************************************************
*																									*
*										      �萔��`												*
*																									*
****************************************************************************************************/
// �������J�[�h�c�[���p
#define		BLOCK_MAX 15
// �O�P�Q�R �S�T�U�V �W�X�`�a �b�c�d�e

/****************************************************************************************************
*																									*
*											    �^��`												*
*																									*
****************************************************************************************************/
typedef struct {
//	long	attribute;
	long	info;			// �ڑ�				����
	long	load;			// ���				
	long	read;			// �ǂݍ���			
	long	write;			// ��������			
	long	init;			// �z�[�}�b�g   	
	long	open;			// �t�@�C���I�[�v��	
	long	file;			// �t�@�C����
	long	func;			// ���s����
	long	flag[10];		// ���s���߂ɑ΂���G���h�t���O
} MCARD;



/* �������J�[�h�����p�\���� */
typedef struct {
	int		mc_port;			// 1P = 0 / 2P = 1
	char	mc_file[28];		// �Z�[�u/���[�h�p�t�@�C���l�[��
	long	*mc_addr;			// �Z�[�u/���[�h�p�f�[�^�擪�A�h���X�i�|�C���^�j
	long	mc_start;			// �Z�[�u/���[�h�p�X�^�[�g�A�h���X�i�P�Q�W�����j
	long	mc_size;			// �Z�[�u/���[�h�p�f�[�^�T�C�Y    �i�P�Q�W�����j
} CARD_ACCESS;
/* �t�@�C���w�b�_�\���� */
typedef struct {
	char	Space0[4];
	char	name0[16];
	char	name1[16];
	char	name2[16];
	char	name3[16];
	char	Space1[60];
} MESS;
/* �o�b�N�A�b�v�p 128*1 �o�C�g�p*/
typedef struct {
	char	Space[128*1];
} BACK_DATA;

/* �o�b�N�A�b�v�p 128*28 �o�C�g�p*/
typedef struct {
	char	Space[128*28];
} BACK_DATA28;

typedef struct {
	int	M_NO;
	int	M_CNT;
	int	M_MAX;
} MT_DT;

//	TIM ��� 
typedef struct{
	short	mode,ix, iy, cx, cy;
	} Tim_Info;

typedef struct {
	int	Jump;
	int	Cnt;
	int E_Flag;
} YN2_DATA;


typedef struct {
	short	Dr[3][4];		/* �h���S���ԍ�,�`�s�s�`�b�j,�`�u�n�h�c,�s�l�o */
	char	Bt;				/* ����Ă���h���S���̔ԍ� */
} CVS_DT;

typedef struct {
	int	Mode;
	int	Sel[2];
} MENU_ST;

// �X�g�[���[���[�h�Ǘ����[�N 
typedef struct {
	char	TMP[64];
	int		s_flag;				// �X�^�[�g�t���O 0=���[�h/1=�j���[ 
	int		code[2];			// �t�@�C�����ʃR�[�h�Z�b�g�p 
	char	f_name[28];			// �������J�[�h�t�@�C���� 
} LSMODE_DATA;


typedef struct {
	short   	Name[8];				// ���O			�i8�����j�i�Q�[�����\���p�f�[�^�j 
	short		Level;					// �v���[�����x�� 1: �����܂ň�Ă� 2: WDC������ 
	int			Money;					// ����			Max 99999 
	int			Day[4];					// �N������		Max 9999,12,31,24 
	char		tmp[72+16];
} PLAY_LD;




extern	PLAY_LD			Load_Data[2][15];		// �Q�[�����f�[�^���[�h�i�P�Q�W�o�C�g�j 
extern	CARD_ACCESS		MC_DATA;
extern	MCARD			mcard_data[2];
extern	int				File_No[2][15];
extern	struct DIRENTRY file_data[2][15];



/****************************************************************************************************
*																									*
*										�֐��v���g�^�C�v�錾										*
*																									*
****************************************************************************************************/
void 		CARD_SYNC_I(void);
int 		CARD_SYNC(CARD_ACCESS);
int 		CARD_SYNC_WAIT();
int 		_calc_total_blocks( int , struct DIRENTRY* );

void		CARD_DRAGON_I(void);
int			CARD_DRAGON(int);


