	@ field-script:0x1EA56A FieldScriptText_1EAA80
	.globl FieldScriptText_1EAA80
FieldScriptText_1EAA80: @ 0x081EAA80
	.string "くやしい……\p……　ぐっすん！　おばあちゃーん！！{EOS}"
	.if (. - FieldScriptText_1EAA80) > 0x1a
	.error "FieldScriptText_1EAA80 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EAA80) < 0x1a
	.space 0x1a - (. - FieldScriptText_1EAA80)
	.endif
	@ field-script:0x1EA5A6 FieldScriptText_1EAA9A
	.globl FieldScriptText_1EAA9A
FieldScriptText_1EAA9A: @ 0x081EAA9A
	.string "こらーっ！\nわしの　かわいい　まごに　なにすんじゃ！\pこうなったら　わしが　おまえさんを\nメタメタに　してやるから　かくごせぇ！{EOS}"
	.if (. - FieldScriptText_1EAA9A) > 0x41
	.error "FieldScriptText_1EAA9A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EAA9A) < 0x41
	.space 0x41 - (. - FieldScriptText_1EAA9A)
	.endif

	@ trainerbattle-cfg:0x1EA5AC TrainerBattleText_1EAADB
	.globl TrainerBattleText_1EAADB
TrainerBattleText_1EAADB: @ 0x081EAADB
	.string "フガッ！　つよいのう……\nまごの　いうことは　ほんとう　じゃった{EOS}"
	.if (. - TrainerBattleText_1EAADB) > 0x21
	.error "TrainerBattleText_1EAADB may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_1EAADB) < 0x21
	.space 0x21 - (. - TrainerBattleText_1EAADB)
	.endif
