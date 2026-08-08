	@ data/maps/LilycoveCity_ContestHall/scripts.inc:355 LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest
	.globl gText_Rom_207E02
gText_Rom_207E02: @ 0x08207E02
	.string "しかい『あら? あなたも\nうつくしさ コンテストに でるの?\lがんばってね！$"
	.if (. - gText_Rom_207E02) > 0x27
	.error "gText_Rom_207E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E02) < 0x27
	.space 0x27 - (. - gText_Rom_207E02)
	.endif
