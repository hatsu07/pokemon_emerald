	@ field-script:0x1EA50D FieldScriptText_1EAA22
	.globl FieldScriptText_1EAA22
FieldScriptText_1EAA22: @ 0x081EAA22
	.string "つよいわよー！\nこのひと　すっごく　つよいわよー！{EOS}"
	.if (. - FieldScriptText_1EAA22) > 0x1a
	.error "FieldScriptText_1EAA22 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EAA22) < 0x1a
	.space 0x1a - (. - FieldScriptText_1EAA22)
	.endif
	@ field-script:0x1EA549 FieldScriptText_1EAA3C
	.globl FieldScriptText_1EAA3C
FieldScriptText_1EAA3C: @ 0x081EAA3C
	.string "ママより　つよいなんて　すごーい！\pでも　あたし　だって　つよいんだから！\nほんと　なんだってば！{EOS}"
	.if (. - FieldScriptText_1EAA3C) > 0x32
	.error "FieldScriptText_1EAA3C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EAA3C) < 0x32
	.space 0x32 - (. - FieldScriptText_1EAA3C)
	.endif

	@ trainerbattle-cfg:0x1EA54F TrainerBattleText_1EAA6E
	.globl TrainerBattleText_1EAA6E
TrainerBattleText_1EAA6E: @ 0x081EAA6E
	.string "えっ　もしかして　まけちゃった……{EOS}"
	.if (. - TrainerBattleText_1EAA6E) > 0x12
	.error "TrainerBattleText_1EAA6E may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_1EAA6E) < 0x12
	.space 0x12 - (. - TrainerBattleText_1EAA6E)
	.endif
