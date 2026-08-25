	@ field-script:0x21E5B4 FieldScriptText_21E7A3
	.globl FieldScriptText_21E7A3
FieldScriptText_21E7A3: @ 0x0821E7A3
	.string "カホ『ふたりの　ラブラブ　パワーでも\nかてない　だなんて\lあなた　すごい　トレーナー　なのね！"
	.byte EOS
	.if (. - FieldScriptText_21E7A3) > 0x30
	.error "FieldScriptText_21E7A3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E7A3) < 0x30
	.space 0x30 - (. - FieldScriptText_21E7A3)
	.endif

	@ trainerbattle-cfg:0x21E5A0 TrainerBattleText_21E7D3
	.globl TrainerBattleText_21E7D3
TrainerBattleText_21E7D3: @ 0x0821E7D3
	.string "カホ『しょうぶ　したかったのに……\nポケモン　2ひき　いないのね……"
	.byte EOS
	.if (. - TrainerBattleText_21E7D3) > 0x23
	.error "TrainerBattleText_21E7D3 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E7D3) < 0x23
	.space 0x23 - (. - TrainerBattleText_21E7D3)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E7F6
	.globl TrainerBattleText_21E7F6
TrainerBattleText_21E7F6: @ 0x0821E7F6
	.string "キミ　ちょうど　いいところに　きたね！\pボク　たいくつで　たまらないんだ\nちょっと　たのしませて　くれよ"
	.byte EOS
	.if (. - TrainerBattleText_21E7F6) > 0x35
	.error "TrainerBattleText_21E7F6 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E7F6) < 0x35
	.space 0x35 - (. - TrainerBattleText_21E7F6)
	.endif

	@ trainerbattle-cfg:0x21E5BB TrainerBattleText_21E82B
	.globl TrainerBattleText_21E82B
TrainerBattleText_21E82B: @ 0x0821E82B
	.string "……もう　いいよ"
	.byte EOS
	.if (. - TrainerBattleText_21E82B) > 0x9
	.error "TrainerBattleText_21E82B may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E82B) < 0x9
	.space 0x9 - (. - TrainerBattleText_21E82B)
	.endif
