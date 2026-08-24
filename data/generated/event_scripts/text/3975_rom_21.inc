	@ field-script:0x21E5CB FieldScriptText_21E834
	.globl FieldScriptText_21E834
FieldScriptText_21E834: @ 0x0821E834
	.string "パパに　たのんで　ボク　せんようの\nヨットを　かってもらおうかな？\lポケモンと　いっしょに　のれる　ヨット！"
	.byte EOS
	.if (. - FieldScriptText_21E834) > 0x37
	.error "FieldScriptText_21E834 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E834) < 0x37
	.space 0x37 - (. - FieldScriptText_21E834)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E86B
	.globl TrainerBattleText_21E86B
TrainerBattleText_21E86B: @ 0x0821E86B
	.string "あら　かわいい　トレーナーさん\nおちゃに　なさる？\lそれとも　しょうぶ　かしら？"
	.byte EOS
	.if (. - TrainerBattleText_21E86B) > 0x29
	.error "TrainerBattleText_21E86B may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E86B) < 0x29
	.space 0x29 - (. - TrainerBattleText_21E86B)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E894
	.globl TrainerBattleText_21E894
TrainerBattleText_21E894: @ 0x0821E894
	.string "かっぱつで　いらっしゃるのね"
	.byte EOS
	.if (. - TrainerBattleText_21E894) > 0xf
	.error "TrainerBattleText_21E894 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E894) < 0xf
	.space 0xf - (. - TrainerBattleText_21E894)
	.endif
