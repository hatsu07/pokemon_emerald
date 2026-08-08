	@ data/text/trainers.inc:2705 Route124_Text_IsabellaPostBattle
	.globl gText_Rom_260701
gText_Rom_260701: @ 0x08260701
	.string "きれいな いろの カケラが\nこの あたりで みつかることが あるわよ$"
	.if (. - gText_Rom_260701) > 0x23
	.error "gText_Rom_260701 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260701) < 0x23
	.space 0x23 - (. - gText_Rom_260701)
	.endif
