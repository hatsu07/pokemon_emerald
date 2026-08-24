	@ field-script:0x21E567 FieldScriptText_21E67E
	.globl gText_Rom_21E67E
gText_Rom_21E67E: @ 0x0821E67E
	.string "にんげん　だけが　ともだち　じゃない\nわたしに　とっては　ポケモンが\lたいせつな　ともだち　なんだよ！"
	.byte EOS
	.if (. - gText_Rom_21E67E) > 0x34
	.error "gText_Rom_21E67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E67E) < 0x34
	.space 0x34 - (. - gText_Rom_21E67E)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6B2
	.globl gText_Rom_21E6B2
gText_Rom_21E6B2: @ 0x0821E6B2
	.string "おきゃくさん\nノックは　したかね？"
	.byte EOS
	.if (. - gText_Rom_21E6B2) > 0x12
	.error "gText_Rom_21E6B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6B2) < 0x12
	.space 0x12 - (. - gText_Rom_21E6B2)
	.endif

	@ trainerbattle-cfg:0x21E56E TrainerBattleText_21E6C4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21E6C4
gText_Rom_21E6C4: @ 0x0821E6C4
	.string "まけても\nあわてず　さわがず"
	.byte EOS
	.if (. - gText_Rom_21E6C4) != 0xf
	.error "gText_Rom_21E6C4 must retain its original byte length"
	.endif
	.globl gText_Rom_21E6C9
	.set gText_Rom_21E6C9, gText_Rom_21E6C4 + 0x5
