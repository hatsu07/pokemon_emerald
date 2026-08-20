	@ data/maps/LilycoveCity/scripts.inc:732 LilycoveCity_Text_HeardTowerCalledSkyPillar
	.globl gText_Rom_1E1431
gText_Rom_1E1431: @ 0x081E1431
	.string "あのな どこかの すいどうに\nそらのはしら とかいう とうが\lたってる らしいぜ{EOS}"
	.if (. - gText_Rom_1E1431) > 0x29
	.error "gText_Rom_1E1431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1431) < 0x29
	.space 0x29 - (. - gText_Rom_1E1431)
	.endif
