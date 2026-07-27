	@ src/field_specials.c:179 sText_99TimesPlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB00E
gText_Rom_5CB00E: @ 0x085CB00E
	.string "99かい いじょう$"
	.if (. - gText_Rom_5CB00E) != 0xa
	.error "gText_Rom_5CB00E must retain its original byte length"
	.endif
	.globl gText_Rom_5CB013
	.set gText_Rom_5CB013, gText_Rom_5CB00E + 0x5
	.globl gUnknown_85CB018
gUnknown_85CB018: @ 0x085CB018

	@ src/field_specials.c:180 sText_1MinutePlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB018
gText_Rom_5CB018: @ 0x085CB018
	.string "1ぷん いじょう$"
	.if (. - gText_Rom_5CB018) != 0x9
	.error "gText_Rom_5CB018 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB01C
	.set gText_Rom_5CB01C, gText_Rom_5CB018 + 0x4
	.globl gUnknown_85CB021
gUnknown_85CB021: @ 0x085CB021

