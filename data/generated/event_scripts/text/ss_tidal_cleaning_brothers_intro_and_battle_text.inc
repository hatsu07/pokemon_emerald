	@ field-script:0x21E3F2 FieldScriptText_21E44C
	.globl FieldScriptText_21E44C
FieldScriptText_21E44C: @ 0x0821E44C
	.string "おれたち　おそうじ　ブラザーズ！\pあにきが　せんざい　ぶちまけてー\nおとうと　せっせと　みがくのさー"
	.byte EOS
	.if (. - FieldScriptText_21E44C) > 0x33
	.error "FieldScriptText_21E44C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E44C) < 0x33
	.space 0x33 - (. - FieldScriptText_21E44C)
	.endif

	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E47F
	.globl TrainerBattleText_21E47F
TrainerBattleText_21E47F: @ 0x0821E47F
	.string "こんなに　ひろいから\nふなぞこで　ポケモンしょうぶ　しても\lだいじょうぶ　だろ？"
	.byte EOS
	.if (. - TrainerBattleText_21E47F) > 0x29
	.error "TrainerBattleText_21E47F may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E47F) < 0x29
	.space 0x29 - (. - TrainerBattleText_21E47F)
	.endif

	@ trainerbattle-cfg:0x21E3F9 TrainerBattleText_21E4A8
	.globl TrainerBattleText_21E4A8
TrainerBattleText_21E4A8: @ 0x0821E4A8
	.string "あにき　まけちまったよ！"
	.byte EOS
	.if (. - TrainerBattleText_21E4A8) > 0xd
	.error "TrainerBattleText_21E4A8 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_21E4A8) < 0xd
	.space 0xd - (. - TrainerBattleText_21E4A8)
	.endif
