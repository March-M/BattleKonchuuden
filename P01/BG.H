/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  System Name   : INSECT POKEMON                                           */
/*  Machine & OS  : Sony PlayStation / PlayStation OS ( R3000 )              */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : BG ENGINE                                                */
/*  File Attribute: HEADER                                                   */
/*  File Name     : BG.H                                                     */
/*                                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#ifndef _BG_H_
#define _BG_H_

/*----- Language Header Files -----*/
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>
#include <libgs.h>

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  ORDERING TABLE                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#define BGOT_LENGTH	8		/* �I�[�_�����O�e�[�u���̉𑜓x */

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  BGMODEL DATA INFORMATION                                                   */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
typedef struct {
	short			status;					/* ���f���̃X�e�[�^�X */
	u_long			attribute;				/* ���f���S�̂̃A�g���r���[�g */
	short			Objnum;					/* ���f�����O�f�[�^�̃I�u�W�F�N�g�̐���ێ����� */
	long			pos[XYZ];				/* ���f���̍��W�n */
	short			ang[XYZ];				/* ���W�n����邽�߂̃��[�e�[�V�����x�N�^�[ */
	long			trans[XYZ];				/* ���[�V�����̃g�����X */
	GsDOBJ2			object[1];				/* �I�u�W�F�N�g�n���h�� �I�u�W�F�N�g�̐������K�v */
	GsCOORDINATE2	objpos[1];				/* �I�u�W�F�N�g���Ƃ̍��W�n */
	SVECTOR			objang[1];				/* ���W�n����邽�߂̃��[�e�[�V�����x�N�^�[ */
} BGMODEL ;

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  PROTOTYPE DIFINITIONS                                                    */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern  "C" {
#endif

extern GsOT        bgot[2];						/* Ordering Table                  */
extern GsOT_TAG    bgot_tag[2][1<<BGOT_LENGTH];	/* �I�[�_�����O�e�[�u������        */

extern void bg_main();
extern void bg_init();

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif  /* _BG_H_ */
