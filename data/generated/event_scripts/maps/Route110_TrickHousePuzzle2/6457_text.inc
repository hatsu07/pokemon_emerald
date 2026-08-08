	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:120 Route110_TrickHousePuzzle2_Text_PaulPostBattle
	.globl gText_Rom_23E255
gText_Rom_23E255: @ 0x0823E255
	.string "カラクリだいおうが ひとりで\nこの しかけを つくってるんだって!$"
	.if (. - gText_Rom_23E255) > 0x22
	.error "gText_Rom_23E255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E255) < 0x22
	.space 0x22 - (. - gText_Rom_23E255)
	.endif
