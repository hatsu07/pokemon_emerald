	@ data/maps/MagmaHideout_3F_1R/scripts.inc:38 MagmaHideout_3F_1R_Text_Grunt16PostBattle
	.globl gText_Rom_21C76C
gText_Rom_21C76C: @ 0x0821C76C
	.string "いい? ただしいのは マグマだんよ!\nアクアだんの いうことなんか\lうそ ばっかりだから しんじちゃ ダメよ!"
	.byte EOS
	.if (. - gText_Rom_21C76C) > 0x38
	.error "gText_Rom_21C76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C76C) < 0x38
	.space 0x38 - (. - gText_Rom_21C76C)
	.endif
	@ Embedded ROM bytes: file offset 0x21C7A4, size 0x18
	.byte 0x00, 0x5C, 0x00, 0xD5, 0x02, 0x00, 0x00, 0xBC, 0xC7, 0x21, 0x08, 0x31, 0xC8, 0x21, 0x08, 0x0F
	.byte 0x00, 0x46, 0xC8, 0x21, 0x08, 0x09, 0x06, 0x02
