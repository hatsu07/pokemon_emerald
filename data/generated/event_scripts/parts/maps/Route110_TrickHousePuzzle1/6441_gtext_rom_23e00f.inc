	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:60 Route110_TrickHousePuzzle1_Text_RobinIntro (+1 aliases)
	.globl gText_Rom_23E00F
gText_Rom_23E00F: @ 0x0823E00F
	.string "カラクリだいおう って\nなにもの なのかしら?"
	.byte EOS
	.if (. - gText_Rom_23E00F) > 0x18
	.error "gText_Rom_23E00F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E00F) < 0x18
	.space 0x18 - (. - gText_Rom_23E00F)
	.endif
