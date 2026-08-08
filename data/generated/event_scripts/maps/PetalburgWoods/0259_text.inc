	@ data/maps/PetalburgWoods/scripts.inc:377 PetalburgWoods_Text_YoureLoadedWithItems (+1 aliases)
	.globl gText_Rom_1DF6D8
gText_Rom_1DF6D8: @ 0x081DF6D8
	.string "どうぐ いっぱいで\nスーパーボール あげられないね$"
	.if (. - gText_Rom_1DF6D8) > 0x1a
	.error "gText_Rom_1DF6D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF6D8) < 0x1a
	.space 0x1a - (. - gText_Rom_1DF6D8)
	.endif
