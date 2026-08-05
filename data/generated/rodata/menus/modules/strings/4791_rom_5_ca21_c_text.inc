	@ src/strings.c:351 gText_CancelBattle
	.globl gText_Rom_5CA21C
gText_Rom_5CA21C: @ 0x085CA21C
	.string "たいせんを やめますか?$"
	.if (. - gText_Rom_5CA21C) > 0xd
	.error "gText_Rom_5CA21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA21C) < 0xd
	.space 0xd - (. - gText_Rom_5CA21C)
	.endif
