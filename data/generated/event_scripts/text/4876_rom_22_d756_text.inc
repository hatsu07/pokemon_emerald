
	@ trainerbattle-cfg:0x22D718 TrainerBattleText_22D756
	.globl gText_Rom_22D756
gText_Rom_22D756: @ 0x0822D756
	.string "テストメッセージ　です{EOS}"
	.if (. - gText_Rom_22D756) > 0xc
	.error "gText_Rom_22D756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D756) < 0xc
	.space 0xc - (. - gText_Rom_22D756)
	.endif
