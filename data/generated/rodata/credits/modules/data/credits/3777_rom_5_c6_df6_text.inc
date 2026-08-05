	@ src/data/credits.h:95 sCreditsText_InfoSupervisors
	.globl gText_Rom_5C6DF6
gText_Rom_5C6DF6: @ 0x085C6DF6
	.string "じょうほう かんり$"
	.if (. - gText_Rom_5C6DF6) > 0xa
	.error "gText_Rom_5C6DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DF6) < 0xa
	.space 0xa - (. - gText_Rom_5C6DF6)
	.endif
