	@ data/maps/MauvilleCity/scripts.inc:531 MauvilleCity_Text_UncleNoNeedToBeDown
	.globl gText_Rom_1DE0F4
gText_Rom_1DE0F4: @ 0x081DE0F4
	.string "おじさん『ミツルくん\nそんなに しょげることは ないよ\pこれから もっともっと\nつよくなれば いいじゃないか!\pさあ うちに かえろう\nみんな まってるよ$"
	.if (. - gText_Rom_1DE0F4) > 0x4e
	.error "gText_Rom_1DE0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE0F4) < 0x4e
	.space 0x4e - (. - gText_Rom_1DE0F4)
	.endif
