	@ src/data/credits.h:92 sCreditsText_Coordinators
	.globl gText_Rom_5C6DD5
gText_Rom_5C6DD5: @ 0x085C6DD5
	.string "コーディネーター$"
	.if (. - gText_Rom_5C6DD5) > 0x9
	.error "gText_Rom_5C6DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DD5) < 0x9
	.space 0x9 - (. - gText_Rom_5C6DD5)
	.endif
