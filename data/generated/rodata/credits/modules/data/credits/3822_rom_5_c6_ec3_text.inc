	@ src/data/credits.h:116 sCreditsText_SatoshiNohara
	.globl gText_Rom_5C6EC3
gText_Rom_5C6EC3: @ 0x085C6EC3
	.string "のはら さとし$"
	.if (. - gText_Rom_5C6EC3) > 0x8
	.error "gText_Rom_5C6EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EC3)
	.endif
