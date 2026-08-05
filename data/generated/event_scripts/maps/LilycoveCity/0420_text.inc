	@ data/maps/LilycoveCity/scripts.inc:664 LilycoveCity_Text_CitySign
	.globl gText_Rom_1E11F4
gText_Rom_1E11F4: @ 0x081E11F4
	.string "ここは ミナモ シティ\nりくちの さいはて うみの はじまり$"
	.if (. - gText_Rom_1E11F4) > 0x1f
	.error "gText_Rom_1E11F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E11F4) < 0x1f
	.space 0x1f - (. - gText_Rom_1E11F4)
	.endif
