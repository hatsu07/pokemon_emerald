	@ data/maps/PetalburgWoods/scripts.inc:431 PetalburgWoods_Text_HiddenItemsExplanation
	.globl gText_Rom_2149F6
gText_Rom_2149F6: @ 0x082149F6
	.string "みえて いなくても\nどうぐが おちてることが あるから\lあしもとを しらべて いるんだ!{EOS}"
	.if (. - gText_Rom_2149F6) > 0x2d
	.error "gText_Rom_2149F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2149F6) < 0x2d
	.space 0x2d - (. - gText_Rom_2149F6)
	.endif
