	@ field-script:0x21E57E FieldScriptText_21E6D3
	.globl FieldScriptText_21E6D3
FieldScriptText_21E6D3: @ 0x0821E6D3
	.string "どんな　ときでも　とりみださないのが\nしんしの　みだしなみ　だよ"
	.byte EOS
	.if (. - FieldScriptText_21E6D3) > 0x21
	.error "FieldScriptText_21E6D3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E6D3) < 0x21
	.space 0x21 - (. - FieldScriptText_21E6D3)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E6F4
	.globl TrainerBattleText_21E6F4
TrainerBattleText_21E6F4: @ 0x0821E6F4
	.string "ジン『ちょっと　はずかしいけど\nぼくたちの　ラブラブ　パワー　みせようかな"
	.byte EOS
	.if (. - TrainerBattleText_21E6F4) > 0x26
	.error "TrainerBattleText_21E6F4 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E6F4) < 0x26
	.space 0x26 - (. - TrainerBattleText_21E6F4)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E71A
	.globl TrainerBattleText_21E71A
TrainerBattleText_21E71A: @ 0x0821E71A
	.string "ジン『はぁ……"
	.byte EOS
	.if (. - TrainerBattleText_21E71A) > 0x8
	.error "TrainerBattleText_21E71A may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E71A) < 0x8
	.space 0x8 - (. - TrainerBattleText_21E71A)
	.endif
