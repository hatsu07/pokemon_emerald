
	@ src/field_specials.c:179 sText_99TimesPlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_99TimesPlus
sText_99TimesPlus: @ 0x085CB00E
	.string "99かい いじょう{EOS}"
	.if (. - sText_99TimesPlus) != 0xa
	.error "sText_99TimesPlus must retain its original byte length"
	.endif

	@ src/field_specials.c:180 sText_1MinutePlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_1MinutePlus
sText_1MinutePlus: @ 0x085CB018
	.string "1ぷん いじょう{EOS}"
	.if (. - sText_1MinutePlus) != 0x9
	.error "sText_1MinutePlus must retain its original byte length"
	.endif
