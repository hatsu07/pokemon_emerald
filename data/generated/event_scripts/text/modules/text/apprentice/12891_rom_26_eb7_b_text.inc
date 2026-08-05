	@ data/text/apprentice.inc:253 gText_ApprenticeItemAlreadyRecommended0
	.globl gText_Rom_26EB7B
gText_Rom_26EB7B: @ 0x0826EB7B
	.string "うわーん! ひどいです\n{STR_VAR_1}は もう\lおしえてもらった どうぐ です グスン\pそれとも {STR_VAR_2}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EB7B) > 0x44
	.error "gText_Rom_26EB7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB7B) < 0x44
	.space 0x44 - (. - gText_Rom_26EB7B)
	.endif
