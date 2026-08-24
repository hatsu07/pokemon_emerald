	@ data/text/save.inc:2 gText_ConfirmSave
	.globl gText_ConfirmSave
gText_ConfirmSave: @ 0x08276F58
	.string "ここまでの かつやくを\nポケモンレポートに かきこみますか?{EOS}"
	.if (. - gText_ConfirmSave) > 0x1f
	.error "gText_ConfirmSave may not grow beyond its original slot"
	.endif
	.if (. - gText_ConfirmSave) < 0x1f
	.space 0x1f - (. - gText_ConfirmSave)
	.endif
