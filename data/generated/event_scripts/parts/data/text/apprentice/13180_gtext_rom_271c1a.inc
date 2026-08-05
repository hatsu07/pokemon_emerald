	@ data/text/apprentice.inc:688 gText_ApprenticeMoveThanks2
	.globl gText_Rom_271C1A
gText_Rom_271C1A: @ 0x08271C1A
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\n{STR_VAR_1}を おぼえさせるぞ!\pじゃあ また!$"
	.if (. - gText_Rom_271C1A) > 0x2d
	.error "gText_Rom_271C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271C1A) < 0x2d
	.space 0x2d - (. - gText_Rom_271C1A)
	.endif
