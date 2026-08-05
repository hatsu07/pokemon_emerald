	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_Rom_5CA799
gText_Rom_5CA799: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA799) > 0x20
	.error "gText_Rom_5CA799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA799) < 0x20
	.space 0x20 - (. - gText_Rom_5CA799)
	.endif
