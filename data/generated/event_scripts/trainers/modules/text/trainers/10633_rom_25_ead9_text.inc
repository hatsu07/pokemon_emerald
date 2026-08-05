	@ data/text/trainers.inc:2039 Route119_Text_HughPostBattle
	.globl gText_Rom_25EAD9
gText_Rom_25EAD9: @ 0x0825EAD9
	.string "そらを とびまわる ユメは\nとりポケモンの おかげで かなえられたよ!$"
	.if (. - gText_Rom_25EAD9) > 0x24
	.error "gText_Rom_25EAD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAD9) < 0x24
	.space 0x24 - (. - gText_Rom_25EAD9)
	.endif
