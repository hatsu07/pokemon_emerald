	@ data/maps/LilycoveCity/scripts.inc:716 LilycoveCity_Text_DoYouKnowAboutBerryBlender
	.globl gText_Rom_1E13A5
gText_Rom_1E13A5: @ 0x081E13A5
	.string "きのみブレンダー っていう\nマシンを しってるかい?$"
	.if (. - gText_Rom_1E13A5) > 0x1b
	.error "gText_Rom_1E13A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13A5) < 0x1b
	.space 0x1b - (. - gText_Rom_1E13A5)
	.endif
