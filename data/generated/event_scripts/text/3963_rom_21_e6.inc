	@ field-script:0x21E567 FieldScriptText_21E67E
	.globl FieldScriptText_21E67E
FieldScriptText_21E67E: @ 0x0821E67E
	.string "にんげん　だけが　ともだち　じゃない\nわたしに　とっては　ポケモンが\lたいせつな　ともだち　なんだよ！"
	.byte EOS
	.if (. - FieldScriptText_21E67E) > 0x34
	.error "FieldScriptText_21E67E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E67E) < 0x34
	.space 0x34 - (. - FieldScriptText_21E67E)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6B2
	.globl TrainerBattleText_21E6B2
TrainerBattleText_21E6B2: @ 0x0821E6B2
	.string "おきゃくさん\nノックは　したかね？"
	.byte EOS
	.if (. - TrainerBattleText_21E6B2) > 0x12
	.error "TrainerBattleText_21E6B2 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E6B2) < 0x12
	.space 0x12 - (. - TrainerBattleText_21E6B2)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6C4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl TrainerBattleText_21E6C4
TrainerBattleText_21E6C4: @ 0x0821E6C4
	.string "まけても\nあわてず　さわがず"
	.byte EOS
	.if (. - TrainerBattleText_21E6C4) != 0xf
	.error "TrainerBattleText_21E6C4 must retain its original byte length"
	.endif
