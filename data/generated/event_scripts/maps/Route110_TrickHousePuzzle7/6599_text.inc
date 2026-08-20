	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:350 Route110_TrickHousePuzzle7_Text_MarielaDefeat (+1 aliases)
	.globl gText_Rom_2403A9
gText_Rom_2403A9: @ 0x082403A9
	.string "あっさり かってくれちゃって!{EOS}"
	.if (. - gText_Rom_2403A9) > 0x10
	.error "gText_Rom_2403A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403A9) < 0x10
	.space 0x10 - (. - gText_Rom_2403A9)
	.endif
