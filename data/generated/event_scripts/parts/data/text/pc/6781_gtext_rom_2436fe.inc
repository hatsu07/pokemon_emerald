	@ data/text/pc.inc:12 gText_StorageSystemOpened
	.globl gText_Rom_2436FE
gText_Rom_2436FE: @ 0x082436FE
	.string "ポケモンの あずかり システムを\nよびだした!$"
	.if (. - gText_Rom_2436FE) > 0x18
	.error "gText_Rom_2436FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436FE) < 0x18
	.space 0x18 - (. - gText_Rom_2436FE)
	.endif
