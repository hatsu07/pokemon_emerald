	@ src/strings.c:355 gText_ReturnToHealingSpot
	.globl gText_Rom_5CA25C
gText_Rom_5CA25C: @ 0x085CA25C
	.string "さいごに やすんだ\n{STR_VAR_1}に テレポートする?$"
	.if (. - gText_Rom_5CA25C) > 0x17
	.error "gText_Rom_5CA25C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA25C) < 0x17
	.space 0x17 - (. - gText_Rom_5CA25C)
	.endif
