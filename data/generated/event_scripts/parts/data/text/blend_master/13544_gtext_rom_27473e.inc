	@ data/text/blend_master.inc:7 BerryBlender_Text_SeeMyMasteryInAction
	.globl gText_Rom_27473E
gText_Rom_27473E: @ 0x0827473E
	.string "めいじん『ふむむむっ! おぬし\nわしの すごい わざを みたいのじゃな?$"
	.if (. - gText_Rom_27473E) > 0x25
	.error "gText_Rom_27473E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27473E) < 0x25
	.space 0x25 - (. - gText_Rom_27473E)
	.endif
