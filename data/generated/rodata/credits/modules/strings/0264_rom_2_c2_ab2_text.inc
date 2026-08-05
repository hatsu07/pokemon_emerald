	@ src/strings.c:1093 gText_OkayToDiscardNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2AB2
gText_Rom_2C2AB2: @ 0x082C2AB2
	.string "  ほんとうに ニュースを\nすてても よいですか?$"
	.if (. - gText_Rom_2C2AB2) != 0x1a
	.error "gText_Rom_2C2AB2 must retain its original byte length"
	.endif
