	@ src/data/credits.h:119 sCreditsText_TakenoriOhta
	.globl gText_Rom_5C6EDD
gText_Rom_5C6EDD: @ 0x085C6EDD
	.string "おおた たけのり$"
	.if (. - gText_Rom_5C6EDD) > 0x9
	.error "gText_Rom_5C6EDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EDD) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EDD)
	.endif
