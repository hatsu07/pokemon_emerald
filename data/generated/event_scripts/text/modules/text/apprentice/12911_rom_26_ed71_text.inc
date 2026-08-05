	@ data/text/apprentice.inc:283 gText_ApprenticeItemAlreadyRecommended2
	.globl gText_Rom_26ED71
gText_Rom_26ED71: @ 0x0826ED71
	.string "{STR_VAR_1}は\nまえに おしえて もらいましたよ\pそれとは ちがう もちものを\nもたせたいんです\pそれとも {STR_VAR_2}には\nなにも もたせなくて いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED71) > 0x49
	.error "gText_Rom_26ED71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED71) < 0x49
	.space 0x49 - (. - gText_Rom_26ED71)
	.endif
