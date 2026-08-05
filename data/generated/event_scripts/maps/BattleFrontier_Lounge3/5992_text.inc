	@ data/maps/BattleFrontier_Lounge3/scripts.inc:314 BattleFrontier_Lounge3_Text_TrainerGoodButRattled
	.globl gText_Rom_238508
gText_Rom_238508: @ 0x08238508
	.string "あの トレーナー…… つよいけど\nバトルドームだと すごく きんちょう\lしちゃうん だよなぁ……"
	.byte EOS
	.if (. - gText_Rom_238508) > 0x31
	.error "gText_Rom_238508 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238508) < 0x31
	.space 0x31 - (. - gText_Rom_238508)
	.endif
