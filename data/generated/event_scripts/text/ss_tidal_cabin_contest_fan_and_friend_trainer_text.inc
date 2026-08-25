	@ field-script:0x21E550 FieldScriptText_21E637
	.globl FieldScriptText_21E637
FieldScriptText_21E637: @ 0x0821E637
	.string "つぎの　コンテストには\nどんな　ポケモンが　でるのか\lたのしみで　たまらないよ"
	.byte EOS
	.if (. - FieldScriptText_21E637) > 0x28
	.error "FieldScriptText_21E637 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E637) < 0x28
	.space 0x28 - (. - FieldScriptText_21E637)
	.endif

	@ trainerbattle-cfg:0x21E557 TrainerBattleText_21E65F
	.globl TrainerBattleText_21E65F
TrainerBattleText_21E65F: @ 0x0821E65F
	.string "きみの　ともだちは　つよいのかね？"
	.byte EOS
	.if (. - TrainerBattleText_21E65F) > 0x12
	.error "TrainerBattleText_21E65F may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E65F) < 0x12
	.space 0x12 - (. - TrainerBattleText_21E65F)
	.endif

	@ trainerbattle-cfg:0x21E557 TrainerBattleText_21E671
	.globl TrainerBattleText_21E671
TrainerBattleText_21E671: @ 0x0821E671
	.string "つよい　ともだち　だね！"
	.byte EOS
	.if (. - TrainerBattleText_21E671) > 0xd
	.error "TrainerBattleText_21E671 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E671) < 0xd
	.space 0xd - (. - TrainerBattleText_21E671)
	.endif
