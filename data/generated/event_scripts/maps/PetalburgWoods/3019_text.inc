	@ data/maps/PetalburgWoods/scripts.inc:398 PetalburgWoods_Text_CantBePopularIfILose (+2 aliases)
	.globl gText_Rom_214968
gText_Rom_214968: @ 0x08214968
	.string "まけると にんきものに なれないや$"
	.if (. - gText_Rom_214968) > 0x12
	.error "gText_Rom_214968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214968) < 0x12
	.space 0x12 - (. - gText_Rom_214968)
	.endif
