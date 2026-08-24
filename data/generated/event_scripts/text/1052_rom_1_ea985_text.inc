	@ field-script:0x1EA472 FieldScriptText_1EA91B
	.globl gText_Rom_1EA91B
gText_Rom_1EA91B: @ 0x081EA91B
	.string "きみ！　たびの　とちゅう　だろうけれど\pどうだ？　ここは　ひとつ\nわたしたち　かぞく　4にんと\lポケモン　しょうぶを　してみないか？{EOS}"
	.if (. - gText_Rom_1EA91B) > 0x43
	.error "gText_Rom_1EA91B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA91B) < 0x43
	.space 0x43 - (. - gText_Rom_1EA91B)
	.endif
	@ field-script:0x1EA485 FieldScriptText_1EA95E
	.globl gText_Rom_1EA95E
gText_Rom_1EA95E: @ 0x081EA95E
	.string "あっそ！\nきが　むいたら　また　おいで！{EOS}"
	.if (. - gText_Rom_1EA95E) > 0x15
	.error "gText_Rom_1EA95E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA95E) < 0x15
	.space 0x15 - (. - gText_Rom_1EA95E)
	.endif
	@ field-script:0x1EA48F FieldScriptText_1EA973
	.globl gText_Rom_1EA973
gText_Rom_1EA973: @ 0x081EA973
	.string "いい　どきょうだ！　きにいったぞ！{EOS}"
	.if (. - gText_Rom_1EA973) > 0x12
	.error "gText_Rom_1EA973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA973) < 0x12
	.space 0x12 - (. - gText_Rom_1EA973)
	.endif

	@ trainerbattle-cfg:0x1EA495 TrainerBattleText_1EA985
	.globl gText_Rom_1EA985
gText_Rom_1EA985: @ 0x081EA985
	.string "たはーっ！\nおもっていたより　つよいんだね　きみは！{EOS}"
	.if (. - gText_Rom_1EA985) > 0x1b
	.error "gText_Rom_1EA985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA985) < 0x1b
	.space 0x1b - (. - gText_Rom_1EA985)
	.endif
