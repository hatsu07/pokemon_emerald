	@ data/maps/EverGrandeCity/scripts.inc:26 EverGrandeCity_Text_EnteringVictoryRoad
	.globl gText_Rom_1E39AD
gText_Rom_1E39AD: @ 0x081E39AD
	.string "これより チャンピオン ロード$"
	.if (. - gText_Rom_1E39AD) > 0x10
	.error "gText_Rom_1E39AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E39AD) < 0x10
	.space 0x10 - (. - gText_Rom_1E39AD)
	.endif
