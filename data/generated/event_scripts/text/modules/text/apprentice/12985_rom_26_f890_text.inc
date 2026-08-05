	@ data/text/apprentice.inc:394 gText_ApprenticeHoldNothing10
	.globl gText_Rom_26F890
gText_Rom_26F890: @ 0x0826F890
	.string "どういう ことかな?\nなにも もたせなくて いいんだな?"
	.byte EOS
	.if (. - gText_Rom_26F890) > 0x1d
	.error "gText_Rom_26F890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F890) < 0x1d
	.space 0x1d - (. - gText_Rom_26F890)
	.endif
