	@ data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc:386 BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls
	.globl gText_Rom_2365DE
gText_Rom_2365DE: @ 0x082365DE
	.string "いいなぁー ほしいなぁー\nかわいい クッションー\lおおきい ぬいぐるみー\lちいさい ぬいぐるみー\lみんな みんな ほっしい なぁー"
	.byte EOS
	.if (. - gText_Rom_2365DE) > 0x42
	.error "gText_Rom_2365DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2365DE) < 0x42
	.space 0x42 - (. - gText_Rom_2365DE)
	.endif
