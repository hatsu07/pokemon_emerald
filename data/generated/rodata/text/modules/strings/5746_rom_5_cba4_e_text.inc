	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CBA4E
gText_Rom_5CBA4E: @ 0x085CBA4E
	.string "こたえは$"
	.if (. - gText_Rom_5CBA4E) > 0x5
	.error "gText_Rom_5CBA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA4E)
	.endif
