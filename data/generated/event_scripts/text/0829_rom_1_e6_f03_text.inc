
	@ trainerbattle-cfg:0x1E6B59 TrainerBattleText_1E6F03
	.globl gText_Rom_1E6F03
gText_Rom_1E6F03: @ 0x081E6F03
	.string "うわっ！　すごい　すごい！\n{0xFD}{0x01}{0xFD}{0x05}　つよい　じゃない！{EOS}"
	.if (. - gText_Rom_1E6F03) > 0x1d
	.error "gText_Rom_1E6F03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6F03) < 0x1d
	.space 0x1d - (. - gText_Rom_1E6F03)
	.endif
