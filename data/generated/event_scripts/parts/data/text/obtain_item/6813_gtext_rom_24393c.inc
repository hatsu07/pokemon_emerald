	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24393C
gText_Rom_24393C: @ 0x0824393C
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24393C) > 0xb
	.error "gText_Rom_24393C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24393C) < 0xb
	.space 0xb - (. - gText_Rom_24393C)
	.endif
