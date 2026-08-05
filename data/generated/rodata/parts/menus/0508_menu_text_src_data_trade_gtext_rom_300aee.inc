	@ src/data/trade.h:49 sJPText_PressBButtonToQuit
	.globl gText_Rom_300AEE
gText_Rom_300AEE: @ 0x08300AEE
	.string "Bボタン で もどります$"
	.if (. - gText_Rom_300AEE) > 0xd
	.error "gText_Rom_300AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AEE) < 0xd
	.space 0xd - (. - gText_Rom_300AEE)
	.endif
	.space 0x1, 0x00
