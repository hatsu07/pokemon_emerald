	@ src/strings.c:771 gText_Silkiness
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CC9FA
gText_Rom_5CC9FA: @ 0x085CC9FA
	.string "  サラサラぐあい$"
	.if (. - gText_Rom_5CC9FA) != 0xa
	.error "gText_Rom_5CC9FA must retain its original byte length"
	.endif
