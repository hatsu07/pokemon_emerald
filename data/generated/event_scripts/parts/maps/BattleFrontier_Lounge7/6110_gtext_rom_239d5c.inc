	@ data/maps/BattleFrontier_Lounge7/scripts.inc:316 BattleFrontier_Lounge7_Text_TeachMoveToWhichMon
	.globl gText_Rom_239D5C
gText_Rom_239D5C: @ 0x08239D5C
	.string "ほいじゃあ わざを おぼえさせる\nポケモンを きめて おくれ!"
	.byte EOS
	.if (. - gText_Rom_239D5C) > 0x20
	.error "gText_Rom_239D5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D5C) < 0x20
	.space 0x20 - (. - gText_Rom_239D5C)
	.endif
