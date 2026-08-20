	@ data/maps/RustboroCity/scripts.inc:1032 RustboroCity_Text_HeyThatsRustborosGymBadge
	.globl gText_Rom_1DF339
gText_Rom_1DF339: @ 0x081DF339
	.string "おっ! カナズミの ジムバッジ!\pいくつか ある バッジの なかで\nカナズミの やつが いちばん かっこいいな!{EOS}"
	.if (. - gText_Rom_1DF339) > 0x39
	.error "gText_Rom_1DF339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF339) < 0x39
	.space 0x39 - (. - gText_Rom_1DF339)
	.endif
