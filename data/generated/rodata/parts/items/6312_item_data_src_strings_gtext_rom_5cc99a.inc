	@ src/strings.c:762 gText_TimesUpNoGoodPowder
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC99A
gText_Rom_5CC99A: @ 0x085CC99A
	.string "  じかんぎれ です\pよいこな が\nできあがり ませんでした\p$"
	.if (. - gText_Rom_5CC99A) != 0x20
	.error "gText_Rom_5CC99A must retain its original byte length"
	.endif
