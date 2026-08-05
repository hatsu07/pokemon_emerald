	@ src/data/text/match_call_messages.h:67 gText_MatchCallRichBoy_Winston_Pokemon
	.globl gText_Rom_5F2BC7
gText_Rom_5F2BC7: @ 0x085F2BC7
	.string "おかねを かけて そだてたよ!$"
	.if (. - gText_Rom_5F2BC7) > 0x10
	.error "gText_Rom_5F2BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BC7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BC7)
	.endif
