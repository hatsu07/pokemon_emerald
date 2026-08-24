	@ field-script:0x23C520 FieldScriptText_23C7A2
	.globl FieldScriptText_23C7A2
FieldScriptText_23C7A2: @ 0x0823C7A2
	.string "あーあ　のどが　かわいちゃった\nサイコソーダ　のもうかな？"
	.byte EOS
	.if (. - FieldScriptText_23C7A2) > 0x1e
	.error "FieldScriptText_23C7A2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_23C7A2) < 0x1e
	.space 0x1e - (. - FieldScriptText_23C7A2)
	.endif

	@ trainerbattle-cfg:0x23C527 TrainerBattleText_23C7C0
	.globl TrainerBattleText_23C7C0
TrainerBattleText_23C7C0: @ 0x0823C7C0
	.string "ぼくの　ポケモンの　すごいところ\nみせちゃうけど　なかないでよ！"
	.byte EOS
	.if (. - TrainerBattleText_23C7C0) > 0x21
	.error "TrainerBattleText_23C7C0 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C7C0) < 0x21
	.space 0x21 - (. - TrainerBattleText_23C7C0)
	.endif

	@ trainerbattle-cfg:0x23C527 TrainerBattleText_23C7E1
	.globl TrainerBattleText_23C7E1
TrainerBattleText_23C7E1: @ 0x0823C7E1
	.string "……まけたけど　なかないぞ"
	.byte EOS
	.if (. - TrainerBattleText_23C7E1) > 0xe
	.error "TrainerBattleText_23C7E1 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_23C7E1) < 0xe
	.space 0xe - (. - TrainerBattleText_23C7E1)
	.endif
