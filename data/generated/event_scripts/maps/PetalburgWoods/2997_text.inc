	@ data/maps/PetalburgWoods/scripts.inc:373 PetalburgWoods_Text_ICantBeWastingTime
	.globl gText_Rom_214808
gText_Rom_214808: @ 0x08214808
	.string "たいへんだ!!\nこうしちゃ いられない!{EOS}"
	.if (. - gText_Rom_214808) > 0x15
	.error "gText_Rom_214808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214808) < 0x15
	.space 0x15 - (. - gText_Rom_214808)
	.endif
