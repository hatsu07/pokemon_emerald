
	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E410
	.globl TrainerBattleText_21E410
TrainerBattleText_21E410: @ 0x0821E410
	.string "こんなに　でっかい　ところ\nそうじ　してるのも　あきたぞ！\lちょいと　しょうぶ　しようや！"
	.byte EOS
	.if (. - TrainerBattleText_21E410) > 0x2e
	.error "TrainerBattleText_21E410 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E410) < 0x2e
	.space 0x2e - (. - TrainerBattleText_21E410)
	.endif

	@ trainerbattle-cfg:0x21E3E2 TrainerBattleText_21E43E
	.globl TrainerBattleText_21E43E
TrainerBattleText_21E43E: @ 0x0821E43E
	.string "おとうと　まけちまったよ！"
	.byte EOS
	.if (. - TrainerBattleText_21E43E) > 0xe
	.error "TrainerBattleText_21E43E may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E43E) < 0xe
	.space 0xe - (. - TrainerBattleText_21E43E)
	.endif
