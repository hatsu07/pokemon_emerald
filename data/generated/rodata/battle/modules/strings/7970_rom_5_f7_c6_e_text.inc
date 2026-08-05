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
