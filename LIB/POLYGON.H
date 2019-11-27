/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  System Name   : INSECT POKEMON                                           */
/*  Machine & OS  : Sony PlayStation / PlayStation OS ( R3000 )              */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : POLYGON TEST [ DEV CODE: 97026 ]                         */
/*  File Attribute: HEADER                                                   */
/*  File Name     : POLYGON.H                                                */
/*                                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#ifndef _POLYGON_H_
#define _POLYGON_H_

#include "../lib/model.h"

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  ADDRESS INFOMATION                                                       */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#define TENKAI_ADDR	 (0x80100000)	/* 28�W�J�o�b�t�@ */
#define LOAD_ADDR	 (0x80128000)	/* 18�t�@�C�����[�h�o�b�t�@ */
#define PLAYER1_ADDR (0x80140000)	/* 28���[�V�����f�[�^�iMTN�t�H�[�}�b�g�j���������A�h���X */
#define MODEL1_ADDR	 (0x80168000)	/* 14���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
#define PLAYER2_ADDR (0x8017c000)	/* 28���[�V�����f�[�^�iMTN�t�H�[�}�b�g�j���������A�h���X */
#define MODEL2_ADDR	 (0x801a4000)	/* 14���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
#define BGMODEL_ADDR (0x801b8000)	/* 08���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
#define EFMODEL_ADDR (0x801c0000)	/* 10���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
#define STATIC_ADDR	 (0x801d0000)	/* �풓�f�[�^ */

//#define TENKAI_ADDR	 (0x80100000)	/* �W�J�o�b�t�@ */
//#define LOAD_ADDR	 (0x80128000)	/* �t�@�C�����[�h�o�b�t�@ */
//#define PLAYER1_ADDR (0x80140000)	/* ���[�V�����f�[�^�iMTN�t�H�[�}�b�g�j���������A�h���X */
//#define MODEL1_ADDR	 (0x80168000)	/* ���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
//#define PLAYER2_ADDR (0x80188000)	/* ���[�V�����f�[�^�iMTN�t�H�[�}�b�g�j���������A�h���X */
//#define MODEL2_ADDR	 (0x801b0000)	/* ���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
//#define BGMODEL_ADDR (0x801d8000)	/* ���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */
//#define EFMODEL_ADDR (0x801e0000)	/* ���f�����O�f�[�^�iTMD�t�H�[�}�b�g�j���������A�h���X */

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  CHARACTER NUMBER                                                         */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
enum {
	MODEL_JP,	/* �j�z���J�u�g���V                 */
	MODEL_HR,	/* �w���N���X�I�I�J�u�g             */
	MODEL_NP,	/* �l�v�`���[���J�u�g               */
	MODEL_ST,	/* �T�^���I�I�J�u�g                 */
	MODEL_AT,	/* �A�g���X�I�I�J�u�g               */
	MODEL_CO,	/* �R�[�J�T�X�I�I�J�u�g             */
	MODEL_BL,	/* �{���l�I�I�I�J�u�g               */
	MODEL_ZO,	/* �]�E�J�u�g                       */
	MODEL_YA,	/* ���k�X�]�E�J�u�g                 */
	MODEL_MA,	/* �}���X�]�E�J�u�g                 */
	MODEL_AZ,	/* �A�N�e�I���]�E�J�u�g             */
	MODEL_AF,	/* �A�t���J�I�I�J�u�g               */
	MODEL_GO,	/* �S�z���d�m�J�u�g                 */
	MODEL_SN,	/* �T���{���d�m�J�u�g               */
	MODEL_HK,	/* �q���J�u�g                       */
	MODEL_NT,	/* �m�R�M���^�e�d�m�J�u�g           */
	MODEL_PT,	/* �s�T���^�e�d�m�J�u�g             */
	MODEL_PN,	/* �p���J�u�g(�C���t���f�B�u�����^) */
	MODEL_P2,	/* �p���J�u�g(�e�B�s�J�^)           */
	MODEL_OM,	/* �I�I�c�m�����K�^�J�u�g           */
	MODEL_HO,	/* �I�I�q���d�m�J�u�g               */
	MODEL_YM,	/* �����A�k�X�~�c�m�J�u�g           */
	MODEL_AR,	/* �A�����w���d�m�J�u�g             */
	MODEL_TN,	/* �e�i�K�R�K�l                     */
	MODEL_OT,	/* �Z�����h�E�i�K�e�i�K�R�K�l       */
	MODEL_HM,	/* �I�I�S���C�A�X�c�m�R�K�l         */
	MODEL_OS,	/* �I�I�T�}�S���C�A�X�c�m�R�K�l     */
	MODEL_EM,	/* ���[���b�p�~���}�N���K�^         */
	MODEL_MY,	/* �~���}�N���K�^                   */
	MODEL_AO,	/* �A�b�T���I�I�c�m�N���K�^         */
	MODEL_AK,	/* �A�J�~�g�Q�V�J�N���K�^           */
	MODEL_TH, 	/* �e�C�I�E�z�\�A�J�N���K�^         */
	MODEL_O2,	/* �I�j�c���N���K�^                 */
	MODEL_FA,	/* �t�`�h���A�J�N���K�^             */
	MODEL_AA,	/* �A�t���J�A�J�N���K�^             */
	MODEL_KN,	/* �I�I�L�o�i�K�N���K�^             */
	MODEL_DH,	/* �_�C�I�E�q���^�N���K�^           */
	MODEL_HT,	/* �q���^�N���K�^                   */
	MODEL_OK,	/* �I�I�N���K�^                     */
	MODEL_ON,	/* �I�I�S���I�j�N���K�^             */
	MODEL_GR,	/* �O���f�B�A�g�[�������K�^�N���K�^ */
	MODEL_KK,	/* �N���c���N�r�{�\�N���K�^         */
	MODEL_NJ,	/* �j�W�C���N���K�^                 */
	MODEL_TK,	/* �`���[�N���K�^                   */
	MODEL_KR,	/* �N���c���I�I�c�m�N���K�^         */
	MODEL_NK,	/* �m�R�M���N���K�^                 */
	MODEL_KM,	/* �I�I�J�}�L��                     */
	MODEL_K2,	/* �n�i�J�}�L��                     */
	MODEL_BE,	/* �X�Y���o�`                       */
	MODEL_KB,	/* �X�Y���o�`                       */
	MODEL_SK,	/* �V���X�W�J�~�L��                 */
	MODEL_RB,	/* �V���X�W�J�~�L��                 */
	MODEL_TC,	/* �^�����`����                     */
	MODEL_SP,	/* �쒎                             */
	MODEL_MK,	/* �J�u�g���                       */
	MODEL_ME,	/* ���J�u�g��                       */
	MODEL_PC,	/* ���C���[�N���K�^                 */
	MODEL_CK,	/* �X�P���g���J�u�g                 */
	MODEL_SO,	/* �X�P���g���I�I�N��               */
	MODEL_MAX
};

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  PLAYER DATA                                                              */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
typedef struct {
	long	length;
	u_char	reflect;
	task_a	render;
	short	size;
	short	hitpos;
} P_DATA;

/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  PROTOTYPE DIFINITIONS                                                    */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern  "C" {
#endif

extern long		LocalTimer;

extern int Polygon();
extern void texture_init(u_long addr);


#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif  /* _POLYGON_H_ */
