	@ src/strings.c:397 gText_EggAboutToHatch
	.globl gText_Rom_5CA46B
gText_Rom_5CA46B: @ 0x085CA46B
	.string "なかから おとが きこえてくる\nもうすぐ うまれそう!$"
	.if (. - gText_Rom_5CA46B) > 0x1c
	.error "gText_Rom_5CA46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA46B) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA46B)
	.endif
