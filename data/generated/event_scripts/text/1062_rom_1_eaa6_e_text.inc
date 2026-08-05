
	@ trainerbattle-cfg:0x1EA54F TrainerBattleText_1EAA6E
	.globl gText_Rom_1EAA6E
gText_Rom_1EAA6E: @ 0x081EAA6E
	.string "えっ　もしかして　まけちゃった……$"
	.if (. - gText_Rom_1EAA6E) > 0x12
	.error "gText_Rom_1EAA6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA6E) < 0x12
	.space 0x12 - (. - gText_Rom_1EAA6E)
	.endif
