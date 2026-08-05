	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5C914F
gText_Rom_5C914F: @ 0x085C914F
	.string "かきくけこ$"
	.if (. - gText_Rom_5C914F) > 0x6
	.error "gText_Rom_5C914F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C914F) < 0x6
	.space 0x6 - (. - gText_Rom_5C914F)
	.endif
