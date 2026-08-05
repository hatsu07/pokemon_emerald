	@ data/text/match_call.inc:865 MatchCall_Text_Norman2
	.globl gText_Rom_26BD3E
gText_Rom_26BD3E: @ 0x0826BD3E
	.string "パパ『ふむ…… {PLAYER}は\nすこしずつ しかし かくじつに\lつよく なっているな\pおまえが つよくなれば なるほど\nわたしや ママの もとから\lとおくへ はなれて いってしまう……\pなんとも ふくざつな きぶんだよ"
	.byte EOS
	.if (. - gText_Rom_26BD3E) > 0x6a
	.error "gText_Rom_26BD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BD3E) < 0x6a
	.space 0x6a - (. - gText_Rom_26BD3E)
	.endif
