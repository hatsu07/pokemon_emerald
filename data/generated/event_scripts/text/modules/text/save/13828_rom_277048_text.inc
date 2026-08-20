	@ data/text/save.inc:29 gText_SaveError
	.globl gText_Rom_277048
gText_Rom_277048: @ 0x08277048
	.string "レポートが かけませんでした\pバックアップカートリッジを\nこうかんしてください!{EOS}"
	.if (. - gText_Rom_277048) > 0x29
	.error "gText_Rom_277048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_277048) < 0x29
	.space 0x29 - (. - gText_Rom_277048)
	.endif
