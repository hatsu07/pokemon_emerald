
	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E410
	.globl gText_Rom_21E410
gText_Rom_21E410: @ 0x0821E410
	.string "こんなに　でっかい　ところ\nそうじ　してるのも　あきたぞ！\lちょいと　しょうぶ　しようや！"
	.byte EOS
	.if (. - gText_Rom_21E410) > 0x2e
	.error "gText_Rom_21E410 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E410) < 0x2e
	.space 0x2e - (. - gText_Rom_21E410)
	.endif

	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E43E
	.globl gText_Rom_21E43E
gText_Rom_21E43E: @ 0x0821E43E
	.string "おとうと　まけちまったよ！"
	.byte EOS
	.if (. - gText_Rom_21E43E) > 0xe
	.error "gText_Rom_21E43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E43E) < 0xe
	.space 0xe - (. - gText_Rom_21E43E)
	.endif
