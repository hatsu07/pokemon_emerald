	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:341 Route110_TrickHousePuzzle7_Text_AlexisDefeat (+1 aliases)
	.globl gText_Rom_240358
gText_Rom_240358: @ 0x08240358
	.string "あら!\nじゃあ おさきに どうぞ!$"
	.if (. - gText_Rom_240358) > 0x12
	.error "gText_Rom_240358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240358) < 0x12
	.space 0x12 - (. - gText_Rom_240358)
	.endif
