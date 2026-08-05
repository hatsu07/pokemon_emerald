	@ data/maps/PetalburgWoods/scripts.inc:377 PetalburgWoods_Text_YoureLoadedWithItems (+1 aliases)
	.globl gText_Rom_21481D
gText_Rom_21481D: @ 0x0821481D
	.string "どうぐ いっぱいで\nスーパーボール あげられないね$"
	.if (. - gText_Rom_21481D) > 0x1a
	.error "gText_Rom_21481D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21481D) < 0x1a
	.space 0x1a - (. - gText_Rom_21481D)
	.endif
