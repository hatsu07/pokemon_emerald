	@ data/maps/BattleFrontier_Lounge6/scripts.inc:35 BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon
	.globl gText_Rom_239706
gText_Rom_239706: @ 0x08239706
	.string "あ ゴメンなさい!\nわたし {STR_VAR_1} いがいとは\lこうかん するつもり ないんでー"
	.byte EOS
	.if (. - gText_Rom_239706) > 0x28
	.error "gText_Rom_239706 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239706) < 0x28
	.space 0x28 - (. - gText_Rom_239706)
	.endif
