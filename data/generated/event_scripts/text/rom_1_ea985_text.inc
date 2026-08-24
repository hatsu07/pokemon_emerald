	@ field-script:0x1EA472 FieldScriptText_1EA91B
	.globl FieldScriptText_1EA91B
FieldScriptText_1EA91B: @ 0x081EA91B
	.string "きみ！　たびの　とちゅう　だろうけれど\pどうだ？　ここは　ひとつ\nわたしたち　かぞく　4にんと\lポケモン　しょうぶを　してみないか？{EOS}"
	.if (. - FieldScriptText_1EA91B) > 0x43
	.error "FieldScriptText_1EA91B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EA91B) < 0x43
	.space 0x43 - (. - FieldScriptText_1EA91B)
	.endif
	@ field-script:0x1EA485 FieldScriptText_1EA95E
	.globl FieldScriptText_1EA95E
FieldScriptText_1EA95E: @ 0x081EA95E
	.string "あっそ！\nきが　むいたら　また　おいで！{EOS}"
	.if (. - FieldScriptText_1EA95E) > 0x15
	.error "FieldScriptText_1EA95E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EA95E) < 0x15
	.space 0x15 - (. - FieldScriptText_1EA95E)
	.endif
	@ field-script:0x1EA48F FieldScriptText_1EA973
	.globl FieldScriptText_1EA973
FieldScriptText_1EA973: @ 0x081EA973
	.string "いい　どきょうだ！　きにいったぞ！{EOS}"
	.if (. - FieldScriptText_1EA973) > 0x12
	.error "FieldScriptText_1EA973 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EA973) < 0x12
	.space 0x12 - (. - FieldScriptText_1EA973)
	.endif

	@ trainerbattle-cfg:0x1EA495 TrainerBattleText_1EA985
	.globl TrainerBattleText_1EA985
TrainerBattleText_1EA985: @ 0x081EA985
	.string "たはーっ！\nおもっていたより　つよいんだね　きみは！{EOS}"
	.if (. - TrainerBattleText_1EA985) > 0x1b
	.error "TrainerBattleText_1EA985 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_1EA985) < 0x1b
	.space 0x1b - (. - TrainerBattleText_1EA985)
	.endif
