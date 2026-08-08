	@ src/strings.c:1135 gText_MoveRelearnerPP
	.globl gText_Rom_5F7C64
gText_Rom_5F7C64: @ 0x085F7C64
	.string "PP/$"
	.if (. - gText_Rom_5F7C64) > 0x4
	.error "gText_Rom_5F7C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C64) < 0x4
	.space 0x4 - (. - gText_Rom_5F7C64)
	.endif
	.globl gUnknown_85F7C68
gUnknown_85F7C68: @ 0x085F7C68

	@ src/strings.c:1136 gText_MoveRelearnerPower
	.globl gText_Rom_5F7C68
gText_Rom_5F7C68: @ 0x085F7C68
	.string "いりょく/$"
	.if (. - gText_Rom_5F7C68) > 0x6
	.error "gText_Rom_5F7C68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C68) < 0x6
	.space 0x6 - (. - gText_Rom_5F7C68)
	.endif
	.globl gUnknown_85F7C6E
gUnknown_85F7C6E: @ 0x085F7C6E

	@ src/strings.c:1137 gText_MoveRelearnerAccuracy
	.globl gText_Rom_5F7C6E
gText_Rom_5F7C6E: @ 0x085F7C6E
	.string "めいちゅう/$"
	.if (. - gText_Rom_5F7C6E) > 0x7
	.error "gText_Rom_5F7C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C6E) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C6E)
	.endif
