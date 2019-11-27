/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/
/*  System Name   : INSECT POKEMON                                           */
/*  Machine & OS  : Sony PlayStation / PlayStation OS ( R3000 )              */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : INIT SPR                                                 */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : AKINIT.C                                                 */
/*                                                                           */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+--*/

/*----- Language Header Files -----*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/file.h>
#include <kernel.h>
#include <libgte.h>
#include <libgpu.h>
#include <libgs.h>
#include <libsn.h>
#include <libmcrd.h>
#include <memory.h>
//#include <libmcrd.h>
/*----- User Header     Files -----*/
#include "../lib/libctl.h"
#include "../lib/libfio.h"
#include "../lib/grpara.h"
#include "../lib/sysara.h"
#include "../lib/comara.h"
#include "../lib/mainsys.h"
#include "ak_mem.h"/* GO.h��蔲�������A�h���X����ύX���ꂽ�狃������ */
//#include "mcapi.h"
#include	"oh_tools.h"
#include "../lib/iSTATIC.h"



/*-------------------------------
�X�v���C�g������
-------------------------------*/
void InitSpr(int no){
#if 0
	AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
	AK_Font[0].attribute |= (0x00<<24);/*16*/
	AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
	AK_Font[0].tpage = 5;/*5page*/
	AK_Font[0].cx = 960;
	AK_Font[0].cy = 510;
	AK_Font[0].u =
	AK_Font[0].v = 0;
	AK_Font[0].w = 16;
	AK_Font[0].h = 16;
	AK_Font[0].x =  
	AK_Font[0].y = 0;// ��ʒ��������_
#endif
	
	switch (no){
		case NOCARD:// �Z�[�u�t�@�C�������[�h���܂����
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 5;/*5page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load0_Size[0][U];
			AK_Font[0].v = AK_Load0_Size[0][V];
			AK_Font[0].w = AK_Load0_Size[0][W];
			AK_Font[0].h = AK_Load0_Size[0][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		break;
		case NODATA:// �������グ���肪�Ƃ��������܂��B�E�E�E
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 5;/*5page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load0_Size[1][U];
			AK_Font[0].v = AK_Load0_Size[1][V];
			AK_Font[0].w = AK_Load0_Size[1][W];
			AK_Font[0].h = AK_Load0_Size[1][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
			// �͂����������K�v
		break;

		case CARDCHECK:// �h�����Ă邩�`�F�b�N
		break;
		case DATACHECK:// �f�[�^�����邩�`�F�b�N
		break;
		case DATABREAKCHECK:// �f�[�^���Ă邩�`�F�b�N
		break;

		case BREAK_DATA:// �f�[�^��ꂿ����Ă�
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 6;/*6page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load1_Size[0][U];
			AK_Font[0].v = AK_Load1_Size[0][V];
			AK_Font[0].w = AK_Load1_Size[0][W];
			AK_Font[0].h = AK_Load1_Size[0][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		break;

		case DATALOAD:// �f�[�^���[�h
		break;
		case LOADCHECK:// ���[�h�����������ȁH
		break;

		case LOADMISS:// ���[�h���s
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 9;/*9page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load1_Size[0][U];
			AK_Font[0].v = AK_Load1_Size[0][V];
			AK_Font[0].w = AK_Load1_Size[0][W];
			AK_Font[0].h = AK_Load1_Size[0][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		break;
		case GOTITLE:// ���[�h����������^�C�g����
		break;
	// �Ȍ�V�K�쐬�菇
		case NEWGAME:// NODATA���番��B���߂ăQ�[�������܂�
		break;
		case CREATEFILE:// �t�@�C������
		break;
		case CHECK_CARD:// �쐬�J�n���Ă���̃����J�h�����Ă邩�`�F�b�N
		break;
		case CARD_NO:// �h�����Ă��܂���
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 6;/*6page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load1_Size[2][U];
			AK_Font[0].v = AK_Load1_Size[2][V];
			AK_Font[0].w = AK_Load1_Size[2][W];
			AK_Font[0].h = AK_Load1_Size[2][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
			// �X���b�g�P�ɃJ�[�h�Z�b�g���Ă�������
			AK_Font[1].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[1].attribute |= (0x00<<24);/*16*/
			AK_Font[1].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[1].tpage = 6;/*6page*/
			AK_Font[1].cx = 960;
			AK_Font[1].cy = 510;
			AK_Font[1].u = AK_Load1_Size[3][U];
			AK_Font[1].v = AK_Load1_Size[3][V];
			AK_Font[1].w = AK_Load1_Size[3][W];
			AK_Font[1].h = AK_Load1_Size[3][H];
			AK_Font[1].x = MESSPOSX;
			AK_Font[1].y = MESSPOSY+16;
		break;
		case FORMATCHECK:// �t�H�[�}�b�g�`����Ă邩�`�F�b�N
		break;
		case UNFORMAT:// �t�H�[�}�b�g����Ă��Ȃ���I�t�H�[�}�b�g����H�H�H
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 6;/*5page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load1_Size[4][U];
			AK_Font[0].v = AK_Load1_Size[4][V];
			AK_Font[0].w = AK_Load1_Size[4][W];
			AK_Font[0].h = AK_Load1_Size[4][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
			// �͂� ���������K�v
			
		break;
		case CHECK_FORMAT:// �t�H�[�}�b�g�͐����������ȁH

		// �\���̓`�F�b�N�̌��ʑʖڂ������ꍇ�ɂ��܂��B

			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 6;/*6page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load1_Size[5][U];
			AK_Font[0].v = AK_Load1_Size[5][V];
			AK_Font[0].w = AK_Load1_Size[5][W];
			AK_Font[0].h = AK_Load1_Size[5][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		
		break;
		case SPACECHECK:// �󂫗e�ʃ`�F�b�N
		// �\���̓`�F�b�N���Ă��߂������ꍇ�ɂ��܂�
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 7;/*7page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load2_Size[0][U];
			AK_Font[0].v = AK_Load2_Size[0][V];
			AK_Font[0].w = AK_Load2_Size[0][W];
			AK_Font[0].h = AK_Load2_Size[0][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		
		break;
		case CHECK_DATA:// ���̃f�[�^�����邩�ȁH
		break;
		case OVERWRITE:// �f�[�^�����������͏㏑���m�F
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 7;/*7page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load2_Size[1][U];
			AK_Font[0].v = AK_Load2_Size[1][V];
			AK_Font[0].w = AK_Load2_Size[1][W];
			AK_Font[0].h = AK_Load2_Size[1][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		// �͂����������K�v

		break;
		case FILE_CREATE:// �쐬�����b�Z�[�W�Ǝ��ۂ̍쐬
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 7;/*7page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load2_Size[2][U];
			AK_Font[0].v = AK_Load2_Size[2][V];
			AK_Font[0].w = AK_Load2_Size[2][W];
			AK_Font[0].h = AK_Load2_Size[2][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		break;
		case CREATEERROR:// �V�K�t�@�C���쐬���s

		// �\���̓`�F�b�N���Ď��s�������ɏo���܂�

			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 7;/*7page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load2_Size[3][U];
			AK_Font[0].v = AK_Load2_Size[3][V];
			AK_Font[0].w = AK_Load2_Size[3][W];
			AK_Font[0].h = AK_Load2_Size[3][H];
			AK_Font[0].x = MESSPOSX;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_Font[0].y = MESSPOSY;
		break;
/********************************************************************************
*			 �����܂ŃI�[�g���[�h�p�A�ȍ~�̓Z�[�u��ʗp							*
*																				*
********************************************************************************/
		case SAVEFILE:// �Z�[�u���邩�����A�L�����Z���̓^�C�g����
		// �Z�[�u���܂���낵���ł����H
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 10;/*10page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load8_Size[0][U];
			AK_Font[0].v = AK_Load8_Size[0][V];
			AK_Font[0].w = AK_Load8_Size[0][W];
			AK_Font[0].h = AK_Load8_Size[0][H];
			AK_Font[0].x = MESSPOSX;
			AK_Font[0].y = MESSPOSY;
		break;
		case MCCHECK:// �h�����Ă邩�`�F�b�N�A�t�H�[�}�b�g���`�F�b�N�ł���
		break;
		case FORMATOK:// �t�H�[�}�b�g���܂����H�����Ȃ痬���
		break;
		case FORMATMISS:// �t�H�[�}�b�g�~�X
		break;
		case SAVE_FILE_CHECK:// �Z�[�u�f�[�^�����邩�̃`�F�b�N�Bopen���Ă݂�
		break;
		case OVER_WRITE_CHECK:// �㏑���m�F
		// ��Ƌ��p�o����
		break;
		case CARD_SPACE_CHECK:// �󂫗e�ʊm�F
		break;
		case NO_SPACE:// �󂫗e�ʖ���
		
		break;
		case CREATE_FILE:// ���ۂɃZ�[�u
		// �������܃Z�[�u���ł�
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 10;/*10page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load8_Size[2][U];
			AK_Font[0].v = AK_Load8_Size[2][V];
			AK_Font[0].w = AK_Load8_Size[2][W];
			AK_Font[0].h = AK_Load8_Size[2][H];
			AK_Font[0].x = MESSPOSX;
			AK_Font[0].y = MESSPOSY;
		break;
		case SAVEMISS:// �Z�[�u�~�X
		// �Z�[�u�Ɏ��s���܂���
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 10;/*10page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load8_Size[3][U];
			AK_Font[0].v = AK_Load8_Size[3][V];
			AK_Font[0].w = AK_Load8_Size[3][W];
			AK_Font[0].h = AK_Load8_Size[3][H];
			AK_Font[0].x = MESSPOSX;
			AK_Font[0].y = MESSPOSY;
		break;
		case GO_SEISAN:// ���Z��ʂ�
		// �Z�[�u�������܂���
			AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_Font[0].attribute |= (0x00<<24);/*16*/
			AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_Font[0].tpage = 10;/*10page*/
			AK_Font[0].cx = 960;
			AK_Font[0].cy = 510;
			AK_Font[0].u = AK_Load8_Size[4][U];
			AK_Font[0].v = AK_Load8_Size[4][V];
			AK_Font[0].w = AK_Load8_Size[4][W];
			AK_Font[0].h = AK_Load8_Size[4][H];
			AK_Font[0].x = MESSPOSX;
			AK_Font[0].y = MESSPOSY;
		break;




		default:
		break;
}// switch last


}





void Init_Yes_No(void){// �͂��������̂��傫��
			AK_YES.attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_YES.attribute |= (0x00<<24);/*16*/
			AK_YES.attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_YES.tpage = 6;/*6page*/
			AK_YES.cx = 960;
			AK_YES.cy = 511;// �I���J���[
			AK_YES.u = AK_Load1_Size[6][U];
			AK_YES.v = AK_Load1_Size[6][V];
			AK_YES.w = AK_Load1_Size[6][W];
			AK_YES.h = AK_Load1_Size[6][H];
			AK_YES.x = -112;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_YES.y = 24;
			
			AK_NO.attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_NO.attribute |= (0x00<<24);/*16*/
			AK_NO.attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_NO.tpage = 6;/*6page*/
			AK_NO.cx = 960;
			AK_NO.cy = 510;
			AK_NO.u = AK_Load1_Size[7][U];
			AK_NO.v = AK_Load1_Size[7][V];
			AK_NO.w = AK_Load1_Size[7][W];
			AK_NO.h = AK_Load1_Size[7][H];
			AK_NO.x = -112;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_NO.y = 48;
}// function last



void Init_New_Or_Replay(void){// ���[�h���邩�V�����n�߂邩�`�F�b�N
			AK_LOAD_OK.attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_LOAD_OK.attribute |= (0x00<<24);/*16*/
			AK_LOAD_OK.attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_LOAD_OK.tpage = 5;/*5page*/
			AK_LOAD_OK.cx = 960;
			AK_LOAD_OK.cy = 511;// �I���J���[
			AK_LOAD_OK.u = AK_Load0_Size[2][U];
			AK_LOAD_OK.v = AK_Load0_Size[2][V];
			AK_LOAD_OK.w = AK_Load0_Size[2][W];
			AK_LOAD_OK.h = AK_Load0_Size[2][H];
			AK_LOAD_OK.x = -112;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_LOAD_OK.y = 24;
			
			AK_NEW_GAME.attribute |= (0x01<<6);/*�P�x�����I�t*/
			AK_NEW_GAME.attribute |= (0x00<<24);/*16*/
			AK_NEW_GAME.attribute |= (0x01<<27);/*��]�g�k�s����*/
			AK_NEW_GAME.tpage = 5;/*5page*/
			AK_NEW_GAME.cx = 960;
			AK_NEW_GAME.cy = 510;
			AK_NEW_GAME.u = AK_Load0_Size[3][U];
			AK_NEW_GAME.v = AK_Load0_Size[3][V];
			AK_NEW_GAME.w = AK_Load0_Size[3][W];
			AK_NEW_GAME.h = AK_Load0_Size[3][H];
			AK_NEW_GAME.x = -112;// �\���ʒu�͌O�Ƌ��ʂɁB
			AK_NEW_GAME.y = 48;
}// function last

void AK_Save_Mode_Init_Tim(){// �Z�[�u���܂���낵���ł����H
	AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
	AK_Font[0].attribute |= (0x00<<24);/*16*/
	AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
	AK_Font[0].tpage = 10;/*10page*/
	AK_Font[0].cx = 960;
	AK_Font[0].cy = 510;
	AK_Font[0].u = AK_Load8_Size[0][U];
	AK_Font[0].v = AK_Load8_Size[0][V];
	AK_Font[0].w = AK_Load8_Size[0][W];
	AK_Font[0].h = AK_Load8_Size[0][H];
	AK_Font[0].x = MESSPOSX;
	AK_Font[0].y = MESSPOSY;
}// Init_Tim last
void AK_Save_Mode_Init_2(){// �J�[�h�����Ȃ��ł�
	AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
	AK_Font[0].attribute |= (0x00<<24);/*16*/
	AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
	AK_Font[0].tpage = 10;/*10page*/
	AK_Font[0].cx = 960;
	AK_Font[0].cy = 510;
	AK_Font[0].u = AK_Load8_Size[2][U];
	AK_Font[0].v = AK_Load8_Size[2][V];
	AK_Font[0].w = AK_Load8_Size[2][W];
	AK_Font[0].h = AK_Load8_Size[2][H];
	AK_Font[0].x = MESSPOSX;
	AK_Font[0].y = MESSPOSY;
}// Init_Tim last
void AK_Save_Mode_Init_3(){// �Z�[�u����
	AK_Font[0].attribute |= (0x01<<6);/*�P�x�����I�t*/
	AK_Font[0].attribute |= (0x00<<24);/*16*/
	AK_Font[0].attribute |= (0x01<<27);/*��]�g�k�s����*/
	AK_Font[0].tpage = 10;/*10page*/
	AK_Font[0].cx = 960;
	AK_Font[0].cy = 510;
	AK_Font[0].u = AK_Load8_Size[4][U];
	AK_Font[0].v = AK_Load8_Size[4][V];
	AK_Font[0].w = AK_Load8_Size[4][W];
	AK_Font[0].h = AK_Load8_Size[4][H];
	AK_Font[0].x = MESSPOSX;
	AK_Font[0].y = MESSPOSY;
}// Init_Tim last


