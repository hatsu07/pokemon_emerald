	@ data/text/trainers.inc:3011 Route128_Text_KatelynRematchDefeat (+1 aliases)
	.globl gText_Rom_26131D
gText_Rom_26131D: @ 0x0826131D
	.string "ほんとっ\nポケモンしょうぶ って きびしい……{EOS}"
	.if (. - gText_Rom_26131D) > 0x18
	.error "gText_Rom_26131D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26131D) < 0x18
	.space 0x18 - (. - gText_Rom_26131D)
	.endif
