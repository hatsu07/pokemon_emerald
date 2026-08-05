	@ data/text/cable_club.inc:206 MossdeepCity_GameCorner_1F_Text_ComeAgain
	.globl gText_Rom_248356
gText_Rom_248356: @ 0x08248356
	.string "また おいでね$"
	.if (. - gText_Rom_248356) > 0x8
	.error "gText_Rom_248356 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248356) < 0x8
	.space 0x8 - (. - gText_Rom_248356)
	.endif
