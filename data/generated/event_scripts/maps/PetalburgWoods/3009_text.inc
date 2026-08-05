	@ data/maps/PetalburgWoods/scripts.inc:398 PetalburgWoods_Text_CantBePopularIfILose (+2 aliases)
	.globl gText_Rom_2148C3
gText_Rom_2148C3: @ 0x082148C3
	.string "まけると にんきものに なれないや$"
	.if (. - gText_Rom_2148C3) > 0x12
	.error "gText_Rom_2148C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2148C3) < 0x12
	.space 0x12 - (. - gText_Rom_2148C3)
	.endif
