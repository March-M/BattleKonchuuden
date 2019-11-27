/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  System Name   : INSECT POKEMON                                           */
/*  Machine & OS  : Sony PlayStation / PlayStation OS ( R3000 )              */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : ORIGINAL DEFINE                                          */
/*  File Attribute: HEADER                                                   */
/*  File Name     : AKI_DEF.H                                                */
/*                                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#if !defined _AKI_DEF_H_
#define _AKI_DEF_H_

/*----------------------------------------------------------------------------+
|    Global Variable Declaration                                              |
+----------------------------------------------------------------------------*/
typedef unsigned    char    Uint8;      /* �����Ȃ��P�o�C�g���� */
typedef signed      char    Sint8;      /* �������P�o�C�g���� */
typedef unsigned    short   Uint16;     /* �����Ȃ��Q�o�C�g���� */
typedef signed      short   Sint16;     /* �������Q�o�C�g���� */
typedef unsigned    long    Uint32;     /* �����Ȃ��S�o�C�g���� */
typedef signed      long    Sint32;     /* �������S�o�C�g���� */
typedef Sint32				Fixed32;    /* Fixed-point representation */
typedef Sint32				FIXED;      /* Fixed-point representation */
typedef short				ANGLE;

#define	FIXED(x)		((Fixed32)((x) * 65536.0))
#define	toFIXED(a)		((long)(4096.0 * (a)))
#define	toFIXED16(a)	((long)(65536.0 * (a)))
#define	DEGtoANG(d)		((short)((4096.0 * (d)) / 360.0))

/*	from SGL	*/

enum {												/* for BIT Check */
	BIT0 = (1 << 0),
	BIT1 = (1 << 1),
	BIT2 = (1 << 2),
	BIT3 = (1 << 3),
	BIT4 = (1 << 4),
	BIT5 = (1 << 5),
	BIT6 = (1 << 6),
	BIT7 = (1 << 7),
	BIT8 = (1 << 8),
	BIT9 = (1 << 9),
	BIT10 = (1 << 10),
	BIT11 = (1 << 11),
	BIT12 = (1 << 12),
	BIT13 = (1 << 13),
	BIT14 = (1 << 14),
	BIT15 = (1 << 15),
	BIT16 = (1 << 16),
	BIT17 = (1 << 17),
	BIT18 = (1 << 18),
	BIT19 = (1 << 19),
	BIT20 = (1 << 20),
	BIT21 = (1 << 21),
	BIT22 = (1 << 22),
	BIT23 = (1 << 23),
	BIT24 = (1 << 24),
	BIT25 = (1 << 25),
	BIT26 = (1 << 26),
	BIT27 = (1 << 27),
	BIT28 = (1 << 28),
	BIT29 = (1 << 29),
	BIT30 = (1 << 30),
	BIT31 = (1 << 31),
};

/* PSX�O���t�B�b�N���[�h�̐ݒ� */
/* GsSPRITE �g�p���̃t���O */
enum {
	V_FLIP_BIT        = 22,						/* �������]�r�b�g */
	H_FLIP_BIT        = 23,						/* �������]�r�b�g */
	SPRITE_COLOR_BIT  = 24,						/* �X�v���C�g�̃J���[�������r�b�g�͂Q�S�r�b�g�� */
	PERSPECTIVE_BIT   = 26,						/* �����ϊ��g�p�r�b�g */
	ZOOM_BIT          = 27,						/* �g��k����]�@�\�g�p�r�b�g */
	BLENDING_RATE_BIT = 28,						/* ���������[�g����r�b�g */
	BLENDING_BIT      = 30,						/* ����������r�b�g */
	SPRITE_BIT        = 31,						/* �X�v���C�g�\������r�b�g */

	LIGHT_OFF = BIT6,							/* �P�x�����r�b�g */
	V_FLIP_OFF = (0 << V_FLIP_BIT),
	V_FLIP_ON = (1 << V_FLIP_BIT),
	V_FLIP = V_FLIP_ON,

	H_FLIP_OFF = (0 << H_FLIP_BIT),
	H_FLIP_ON = (1 << H_FLIP_BIT),
	H_FLIP = H_FLIP_ON,

	CLUT4 = (0 << SPRITE_COLOR_BIT),	/* 4bit Color Mode (16) */
	CLUT8 = (1 << SPRITE_COLOR_BIT),	/* 8bit Color Mode (256) */
	DIRECT15 = (2 << SPRITE_COLOR_BIT),	/* 15bit Direct Color Mode (32768) */

	PERS_OFF = (0 << PERSPECTIVE_BIT),	/* �����ϊ��I�t */
	PERS_ON = (1 << PERSPECTIVE_BIT),	/* �����ϊ��I�� */

	ZOOM_OFF = (1 << ZOOM_BIT),			/* �g��k����]�@�\�I�t */
	ZOOM_ON = (0 << ZOOM_BIT),			/* �g��k����]�@�\�I�� */

	NBLEND = ((1 << BLENDING_BIT) | (0 << BLENDING_RATE_BIT)),	/* ������ */
	ABLEND = ((1 << BLENDING_BIT) | (1 << BLENDING_RATE_BIT)),	/* ���Z */
	SBLEND = ((1 << BLENDING_BIT) | (2 << BLENDING_RATE_BIT)),	/* ���Z */
	HBLEND = ((1 << BLENDING_BIT) | (3 << BLENDING_RATE_BIT)),	/* �����Z */

	SPR_OFF = (1 << SPRITE_BIT),		/* �X�v���C�g�I�t */
	SPR_ON = (0 << SPRITE_BIT),			/* �X�v���C�g�I�� */
};

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  DIMENTION INFORMATION                                                    */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
enum {
	X,
	Y,
	Z,
	XYZ,
	XY = 2,
	XYZD = 4,
	D = 3,
};

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  RGB INFORMATION                                                          */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
enum {
	R,
	G,
	B,
	RGB,
};

typedef	void(*task_a)();	/* task_a�͊֐��^�ƒ�` */

/*----------------------------------------------------------------------------+
|    Macro Declaration                                                        |
+----------------------------------------------------------------------------*/
/*---------------------------------
    ���������璼�ړǂݍ��ރ}�N��
    Uint8  peek_b(Uint8 *)
    Uint16 peek_w(Uint16*)
    Uint32 peek_l(Uint32*)
  --------------------------------*/
#define peek_b(_address_) (*(Uint8 *)(_address_))
#define peek_w(_address_) (*(Uint16*)(_address_))
#define peek_l(_address_) (*(Uint32*)(_address_))

/*-----------------------------------
    �������ɒ��ڏ������ރ}�N��
    Uint8  poke_b(Uint8 *, Uint8 )
    Uint16 poke_w(Uint16*, Uint16)
    Uint32 poke_l(Uint32*, Uint32)
  -----------------------------------*/
#define poke_b(_address_, _data_) (*(Uint8 *)(_address_) = (_data_))
#define poke_w(_address_, _data_) (*(Uint16*)(_address_) = (_data_))
#define poke_l(_address_, _data_) (*(Uint32*)(_address_) = (_data_))

#define	NumToAddrMcr( num, baseadd ) ((baseadd) + (unsigned long)(*( (unsigned long*)(baseadd) + ((num)+1) )))

#endif
