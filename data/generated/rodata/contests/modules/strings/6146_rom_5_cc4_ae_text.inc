	@ src/strings.c:711 gText_PreliminaryResults
	.globl gText_Rom_5CC4AE
gText_Rom_5CC4AE: @ 0x085CC4AE
	.string "1じしんさの けっか!$"
	.if (. - gText_Rom_5CC4AE) > 0xc
	.error "gText_Rom_5CC4AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4AE) < 0xc
	.space 0xc - (. - gText_Rom_5CC4AE)
	.endif
