
	@ trainerbattle-cfg:0x23C50C TrainerBattleText_23C75F
	.globl gText_Rom_23C75F
gText_Rom_23C75F: @ 0x0823C75F
	.string "たいくつな　しょうぶ　なんて　ムダ！\pもえあがるような　しょうぶ　こそ\nトレーナーと　ポケモンを　きたえるのよ！"
	.byte EOS
	.if (. - gText_Rom_23C75F) > 0x39
	.error "gText_Rom_23C75F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C75F) < 0x39
	.space 0x39 - (. - gText_Rom_23C75F)
	.endif

	@ trainerbattle-cfg:0x23C50C TrainerBattleText_23C798
	.globl gText_Rom_23C798
gText_Rom_23C798: @ 0x0823C798
	.string "あつい　じゃない！"
	.byte EOS
	.if (. - gText_Rom_23C798) > 0xa
	.error "gText_Rom_23C798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C798) < 0xa
	.space 0xa - (. - gText_Rom_23C798)
	.endif
