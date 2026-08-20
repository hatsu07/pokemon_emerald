	@ data/maps/LavaridgeTown/scripts.inc:349 LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare
	.globl gText_Rom_1E5C5A
gText_Rom_1E5C5A: @ 0x081E5C5A
	.string "ポケモンの タマゴは\nときどき そだてやさんで みつかる……\pそんな うわさを きいたよ{EOS}"
	.if (. - gText_Rom_1E5C5A) > 0x2d
	.error "gText_Rom_1E5C5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5C5A) < 0x2d
	.space 0x2d - (. - gText_Rom_1E5C5A)
	.endif
