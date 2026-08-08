	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:332 Route110_TrickHousePuzzle7_Text_PatriciaDefeat (+1 aliases)
	.globl gText_Rom_2402FC
gText_Rom_2402FC: @ 0x082402FC
	.string "まけた……!\nえんぎが わるいわ……!$"
	.if (. - gText_Rom_2402FC) > 0x14
	.error "gText_Rom_2402FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402FC) < 0x14
	.space 0x14 - (. - gText_Rom_2402FC)
	.endif
