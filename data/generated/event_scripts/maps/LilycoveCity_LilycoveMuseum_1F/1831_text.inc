	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:227 LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings
	.globl gText_Rom_20613F
gText_Rom_20613F: @ 0x0820613F
	.string "ここで いい えを たくさん みて\nべんきょう しないとな!\pここに いつか じぶんの さくひんを\nかざって もらうのが ゆめ なんだ!$"
	.if (. - gText_Rom_20613F) > 0x45
	.error "gText_Rom_20613F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20613F) < 0x45
	.space 0x45 - (. - gText_Rom_20613F)
	.endif
