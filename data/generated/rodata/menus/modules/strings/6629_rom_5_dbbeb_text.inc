	@ src/strings.c:998 gText_Others2 (+1 aliases)
	.globl gText_Rom_5DBBEB
gText_Rom_5DBBEB: @ 0x085DBBEB
	.string "べつのにする$"
	.if (. - gText_Rom_5DBBEB) > 0x7
	.error "gText_Rom_5DBBEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBEB) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBEB)
	.endif
