	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_Rom_5CA776
gText_Rom_5CA776: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA776) > 0x23
	.error "gText_Rom_5CA776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA776) < 0x23
	.space 0x23 - (. - gText_Rom_5CA776)
	.endif
