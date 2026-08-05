	@ data/maps/DewfordTown/scripts.inc:636 DewfordTown_Text_GymSign
	.globl gText_Rom_1E5149
gText_Rom_1E5149: @ 0x081E5149
	.string "ムロ タウン ポケモンジム\nリーダー トウキ\lかくとう ビッグウェーブ!$"
	.if (. - gText_Rom_1E5149) > 0x25
	.error "gText_Rom_1E5149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5149) < 0x25
	.space 0x25 - (. - gText_Rom_1E5149)
	.endif
