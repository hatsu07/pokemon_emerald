	@ data/maps/AquaHideout_B2F/scripts.inc:119 AquaHideout_B2F_Text_Grunt8Intro (+1 aliases)
	.globl gText_Rom_2182D8
gText_Rom_2182D8: @ 0x082182D8
	.string "オレが アクアだんに はいって\nまっさきに おぼえ させられたのが\lこの ワープパネルの はいれつだ!$"
	.if (. - gText_Rom_2182D8) > 0x34
	.error "gText_Rom_2182D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2182D8) < 0x34
	.space 0x34 - (. - gText_Rom_2182D8)
	.endif
