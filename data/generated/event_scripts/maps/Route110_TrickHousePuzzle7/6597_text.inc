	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:347 Route110_TrickHousePuzzle7_Text_MarielaIntro (+1 aliases)
	.globl gText_Rom_240391
gText_Rom_240391: @ 0x08240391
	.string "んっふっふっふ きたわねっ\nさあ しょうぶよ!{EOS}"
	.if (. - gText_Rom_240391) > 0x18
	.error "gText_Rom_240391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240391) < 0x18
	.space 0x18 - (. - gText_Rom_240391)
	.endif
