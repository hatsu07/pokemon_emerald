	@ data/maps/LavaridgeTown/scripts.inc:393 LavaridgeTown_Text_TownSign
	.globl gText_Rom_1E5DFF
gText_Rom_1E5DFF: @ 0x081E5DFF
	.string "ここは フエン タウン\nポケセン おんせん よいところ{EOS}"
	.if (. - gText_Rom_1E5DFF) > 0x1c
	.error "gText_Rom_1E5DFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5DFF) < 0x1c
	.space 0x1c - (. - gText_Rom_1E5DFF)
	.endif
