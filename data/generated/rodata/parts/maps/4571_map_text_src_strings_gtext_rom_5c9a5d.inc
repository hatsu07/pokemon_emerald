	@ src/strings.c:240 gText_HowManyToSell
	.globl gText_Rom_5C9A5D
gText_Rom_5C9A5D: @ 0x085C9A5D
	.string "{STR_VAR_2}を\nいくつ うりますか?$"
	.if (. - gText_Rom_5C9A5D) > 0xf
	.error "gText_Rom_5C9A5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A5D) < 0xf
	.space 0xf - (. - gText_Rom_5C9A5D)
	.endif
