	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:353 Route110_TrickHousePuzzle7_Text_MarielaPostBattle
	.globl gText_Rom_2403B9
gText_Rom_2403B9: @ 0x082403B9
	.string "ふん べつに くやしく ないから!\nわたし!$"
	.if (. - gText_Rom_2403B9) > 0x17
	.error "gText_Rom_2403B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403B9) < 0x17
	.space 0x17 - (. - gText_Rom_2403B9)
	.endif
