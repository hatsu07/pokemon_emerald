	@ data/text/trainers.inc:2732 Route125_Text_TanyaPostBattle
	.globl gText_Rom_2607E7
gText_Rom_2607E7: @ 0x082607E7
	.string "ふう ふう……\nトクサネシティは どっち だったっけ?$"
	.if (. - gText_Rom_2607E7) > 0x1c
	.error "gText_Rom_2607E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2607E7) < 0x1c
	.space 0x1c - (. - gText_Rom_2607E7)
	.endif
