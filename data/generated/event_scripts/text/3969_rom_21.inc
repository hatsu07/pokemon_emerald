
	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E75A
	.globl gText_Rom_21E75A
gText_Rom_21E75A: @ 0x0821E75A
	.string "ジン『ポケモン　いっぴき？\nそれだと　さみしくないか？"
	.byte EOS
	.if (. - gText_Rom_21E75A) > 0x1c
	.error "gText_Rom_21E75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E75A) < 0x1c
	.space 0x1c - (. - gText_Rom_21E75A)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E776
	.globl gText_Rom_21E776
gText_Rom_21E776: @ 0x0821E776
	.string "カホ『ちょっと　はずかしいけど\nふたりの　ラブラブ　パワー　みせてあげる！"
	.byte EOS
	.if (. - gText_Rom_21E776) > 0x26
	.error "gText_Rom_21E776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E776) < 0x26
	.space 0x26 - (. - gText_Rom_21E776)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E79C
	.globl gText_Rom_21E79C
gText_Rom_21E79C: @ 0x0821E79C
	.string "カホ『やん！"
	.byte EOS
	.if (. - gText_Rom_21E79C) > 0x7
	.error "gText_Rom_21E79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E79C) < 0x7
	.space 0x7 - (. - gText_Rom_21E79C)
	.endif
