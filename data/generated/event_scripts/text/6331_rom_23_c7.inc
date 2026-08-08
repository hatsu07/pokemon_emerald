
	@ trainerbattle-cfg:0x23C527 TrainerBattleText_23C7C0
	.globl gText_Rom_23C7C0
gText_Rom_23C7C0: @ 0x0823C7C0
	.string "ぼくの　ポケモンの　すごいところ\nみせちゃうけど　なかないでよ！"
	.byte EOS
	.if (. - gText_Rom_23C7C0) > 0x21
	.error "gText_Rom_23C7C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C7C0) < 0x21
	.space 0x21 - (. - gText_Rom_23C7C0)
	.endif

	@ trainerbattle-cfg:0x23C527 TrainerBattleText_23C7E1
	.globl gText_Rom_23C7E1
gText_Rom_23C7E1: @ 0x0823C7E1
	.string "……まけたけど　なかないぞ"
	.byte EOS
	.if (. - gText_Rom_23C7E1) > 0xe
	.error "gText_Rom_23C7E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C7E1) < 0xe
	.space 0xe - (. - gText_Rom_23C7E1)
	.endif
