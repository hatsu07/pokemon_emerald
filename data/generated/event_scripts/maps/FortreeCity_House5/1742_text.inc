	@ data/maps/FortreeCity_House5/scripts.inc:25 FortreeCity_House5_Text_AdaptedToNature
	.globl gText_Rom_2053A4
gText_Rom_2053A4: @ 0x082053A4
	.string "ポケモンも ひとも\nしぜんに あわせて くらしてきたからな\pいまさら じぶんらの つごうに\nしぜんを あわせなくて いいんだよ{EOS}"
	.if (. - gText_Rom_2053A4) > 0x40
	.error "gText_Rom_2053A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053A4) < 0x40
	.space 0x40 - (. - gText_Rom_2053A4)
	.endif
