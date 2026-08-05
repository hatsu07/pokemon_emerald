	@ data/text/tv.inc:1147 GabbyAndTy_Text_GabbyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25322F
gText_Rom_25322F: @ 0x0825322F
	.string "マリ『ポケモンを いっぱい つれてる\nつよい トレーナーって いない かしら?"
	.byte EOS
	.if (. - gText_Rom_25322F) > 0x28
	.error "gText_Rom_25322F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25322F) < 0x28
	.space 0x28 - (. - gText_Rom_25322F)
	.endif
