	@ src/data/credits.h:182 sCreditsText_JapanBrailleLibrary
	.globl gText_Rom_5C7105
gText_Rom_5C7105: @ 0x085C7105
	.string "にっぽんてんじとしょかん$"
	.if (. - gText_Rom_5C7105) > 0xd
	.error "gText_Rom_5C7105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7105) < 0xd
	.space 0xd - (. - gText_Rom_5C7105)
	.endif
