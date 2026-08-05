	@ data/maps/BattleFrontier_Lounge7/scripts.inc:334 BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong
	.globl gText_Rom_239F18
gText_Rom_239F18: @ 0x08239F18
	.string "あの ふたりって おたがいの\nわるぐち いい あってる から\lなかが わるいとか おもって ないか?\pでも ほんとに そう だったら いっしょに\nこんなところに いたり しないよな"
	.byte EOS
	.if (. - gText_Rom_239F18) > 0x5b
	.error "gText_Rom_239F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239F18) < 0x5b
	.space 0x5b - (. - gText_Rom_239F18)
	.endif
