	@ src/field_specials.c:179 sText_99TimesPlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB00E
gText_Rom_5CB00E: @ 0x085CB00E
	.string "99かい いじょう$"
	.if (. - gText_Rom_5CB00E) != 0xa
	.error "gText_Rom_5CB00E must retain its original byte length"
	.endif
