	@ src/data/credits.h:99 sCreditsText_BattleFrontierData
	.globl gText_Rom_5C6E25
gText_Rom_5C6E25: @ 0x085C6E25
	.string "バトルフロンティア データ$"
	.if (. - gText_Rom_5C6E25) > 0xe
	.error "gText_Rom_5C6E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E25) < 0xe
	.space 0xe - (. - gText_Rom_5C6E25)
	.endif
