#ifndef _YUMA_H_
#define _YUMA_H_

//	�o�r���C�u�����[���r�f�k���C�N�Ɏg�����߂̃}�N��
typedef unsigned char	Uint8 ;		/* �����Ȃ��P�o�C�g���� */
typedef signed   char	Sint8 ;		/* �������P�o�C�g���� */
typedef unsigned short	Uint16 ;	/* �����Ȃ��Q�o�C�g���� */
typedef signed   short	Sint16 ;	/* �������Q�o�C�g���� */
typedef unsigned long	Uint32 ;	/* �����Ȃ��S�o�C�g���� */
typedef signed   long	Sint32 ;	/* �������S�o�C�g���� */
typedef float		Float32 ;	/* �S�o�C�g���� */
typedef double		Float64 ;	/* �W�o�C�g���� */
typedef Sint32	FIXED ;		/* ��ʂP�U�r�b�g�Ő������A���ʂP�U�r�b�g�ŏ�������\���Œ菬���_�^ */

typedef int		Int ;		/* INT�^�i�c�[���p�j		*/

typedef int		Bool ;		/* �_���^�i�_���萔��l�ɂƂ�j	*/
typedef short	ANGLE;

typedef	void(*task_a)();	// task_a�͊֐��^�ƒ�`

#define	    toFIXED(a)		((FIXED)(4096.0 * (a)))
#define	    toFIXED16(a)	((FIXED)(65536.0 * (a)))
#define	    DEGtoANG(d)		((ANGLE)((4096.0 * (d)) / 360.0))
#define	    DEGtoANG2(d)	((long)((1474560.0 * (d)) / 360.0))
#define		DEGtoANG3(d)	(long)((65536.0 * (d) / 360))


enum {
	OFF,
	ON,
};

//	�R���g���[���̒�`
//	LIBETC.H
#define PAD_U	PADLup
#define PAD_D	PADLdown
#define PAD_L	PADLleft
#define PAD_R	PADLright
#define PAD_SANKAKU	PADRup
#define PAD_BATU	PADRdown
#define PAD_SIKAKU	PADRleft
#define PAD_MARU	PADRright
#define PAD_L1	PADL1
#define PAD_L2	PADL2
#define PAD_R1	PADR1
#define PAD_R2	PADR2
#define PAD_ST	PADstart
#define PAD_SEL	PADselect

enum {
	X,
	Y,
	Z,
	XYZ,
	XY = 2,
	XYZD = 4,
	D = 3,
};

enum {
	R,
	G,
	B,
	RGB,
};

#define	    SETRGB(r,g,b)		((b)<<10)|((g)<<5)|(r)



//	�X�v���C�g��`
#define	COL16	0			//�P�U�F���[�h
#define	COL256	1<<24		//�Q�T�U�F���[�h
#define	COL32K	1<<25		//�R�Q�j�F���[�h
#define	SPRITE_OFF	1<<31	//�\��
#define	SPRITE_ON	0<<31	//��\��
#define	CL_Trans	1<<30			//������on

#define TRANSLATION(x,y,z)	{toFIXED(x),toFIXED(y),toFIXED(z)}
#define ROTATION(x,y,z)		{DEGtoANG(x),DEGtoANG(y),DEGtoANG(z)}
#define SCALING(x,y,z)		{toFIXED(x),toFIXED(y),toFIXED(z)}

typedef struct obj{
	GsDOBJ2	*pat;			/* �|���S�����f���f�[�^�e�[�u�� */
    FIXED	 pos[XYZ] ;		/* ���Έʒu�f�[�^ */
    ANGLE	 ang[XYZ] ;		/* ��]�p�f�[�^ */
    FIXED	 scl[XYZ] ;		/* �X�P�[�����O�f�[�^ */
    struct obj	*child ;		/* �q�I�u�W�F�N�g�f�[�^ */
    struct obj	*sibling ;		/* �Z��I�u�W�F�N�g�f�[�^ */
} OBJECT ;

//�|���S���A�g���r���[�g
#define	    UseLight		(0<<6)		//�����̉e�����󂯂�|���S�� 
#define	    NotUseLight		(1<<6)		//�����̉e�����󂯂Ȃ��|���S�� 
#if 0
enum {
	FALSE,
	TRUE,
};
#endif

#define	SHADOW_OFF	0
#define	SHADOW_ON	1




//	���l���Z�}�N��
//�|���Z
//#define slMulFX(v0,v1)	(((v0) * (v1)) >> 12)
//��Βl
#define ABS(x)	((x) < 0 ? -(x) : (x))
//����
#define rtan(x)	(((rsin(x)<<12) / rcos(x)))
//����Z
//#define slDivFX(v0,v1)	(((v1) / (v0)) << 12)

typedef struct  {
	u_long *vertop;		/* vertex top address of TMD format */
	u_long  vern;		/* the number of vertex of TMD format */
	u_long *nortop;		/* normal top address of TMD format */
	u_long  norn;		/* the number of normal of TMD format */
	u_long *primtop;	/* primitive top address of TMD format */
	u_long  primn;		/* the number of primitives of TMD format */
	u_long  scale;		/* the scale factor of TMD format */
} TMD_STRUCT2;

typedef struct {
	Sint16	x;
	Sint16	y;
	Sint16	z;
} STRUCT_XYZ;


typedef struct {
	Sint16	x;
	Sint16	y;
} STRUCT_XY;

typedef struct {
	Sint16	x;
	Sint16	y;
	Sint16	w;
	Sint16	h;
} STRUCT_XYWH;

typedef struct {
	Sint16	x1;
	Sint16	y1;
	Sint16	x2;
	Sint16	y2;
} STRUCT_LINE;



#endif


