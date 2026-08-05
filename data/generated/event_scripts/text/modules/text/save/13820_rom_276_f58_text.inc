	@ data/text/save.inc:2 gText_ConfirmSave
	.globl gText_Rom_276F58
gText_Rom_276F58: @ 0x08276F58
	.string "ここまでの かつやくを\nポケモンレポートに かきこみますか?$"
	.if (. - gText_Rom_276F58) > 0x1f
	.error "gText_Rom_276F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F58) < 0x1f
	.space 0x1f - (. - gText_Rom_276F58)
	.endif
