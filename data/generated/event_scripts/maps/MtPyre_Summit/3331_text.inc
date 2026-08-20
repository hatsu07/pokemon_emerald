	@ data/maps/MtPyre_Summit/scripts.inc:463 MtPyre_Summit_Text_Grunt3PostBattle
	.globl gText_Rom_21714D
gText_Rom_21714D: @ 0x0821714D
	.string "まあいいさ じかんは かせげた!\pリーダーの もくてきの もの\nうばえた はずだぜ!{EOS}"
	.if (. - gText_Rom_21714D) > 0x2b
	.error "gText_Rom_21714D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21714D) < 0x2b
	.space 0x2b - (. - gText_Rom_21714D)
	.endif
