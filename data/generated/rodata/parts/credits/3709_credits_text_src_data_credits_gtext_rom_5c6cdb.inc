	@ src/data/credits.h:69 sCreditsText_Director
	.globl gText_Rom_5C6CDB
gText_Rom_5C6CDB: @ 0x085C6CDB
	.string "ディレクター$"
	.if (. - gText_Rom_5C6CDB) > 0x7
	.error "gText_Rom_5C6CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CDB) < 0x7
	.space 0x7 - (. - gText_Rom_5C6CDB)
	.endif
