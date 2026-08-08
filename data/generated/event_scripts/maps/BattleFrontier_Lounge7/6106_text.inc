	@ data/maps/BattleFrontier_Lounge7/scripts.inc:310 BattleFrontier_Lounge7_Text_TeachWhichMove
	.globl gText_Rom_239D27
gText_Rom_239D27: @ 0x08239D27
	.string "ほれほれー どのわざを おぼえたいんじゃ?"
	.byte EOS
	.if (. - gText_Rom_239D27) > 0x16
	.error "gText_Rom_239D27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D27) < 0x16
	.space 0x16 - (. - gText_Rom_239D27)
	.endif
