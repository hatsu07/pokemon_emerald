	@ src/strings.c:710 gText_AnnouncingResults
	.globl gText_Rom_5CC4A3
gText_Rom_5CC4A3: @ 0x085CC4A3
	.string "けっか はっぴょう!$"
	.if (. - gText_Rom_5CC4A3) > 0xb
	.error "gText_Rom_5CC4A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4A3) < 0xb
	.space 0xb - (. - gText_Rom_5CC4A3)
	.endif
