	@ data/text/blend_master.inc:18 BerryBlender_Text_BlendMasterNoBerries
	.globl gText_Rom_2747AD
gText_Rom_2747AD: @ 0x082747AD
	.string "ふむむむっ!\pおぬし きのみを もっておらんぞ!\pわしは きょう ずっと ここに おるから\nはやく きのみを みつけて くるのじゃぞ!$"
	.if (. - gText_Rom_2747AD) > 0x44
	.error "gText_Rom_2747AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747AD) < 0x44
	.space 0x44 - (. - gText_Rom_2747AD)
	.endif
