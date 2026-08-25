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
	@ field-script:0x1EA4B0 FieldScriptText_1EA9A0
	.globl FieldScriptText_1EA9A0
FieldScriptText_1EA9A0: @ 0x081EA9A0
	.string "おーい！\nなかなか　つよい　トレーナーが　いたぞー！{EOS}"
	.if (. - FieldScriptText_1EA9A0) > 0x1b
	.error "FieldScriptText_1EA9A0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EA9A0) < 0x1b
	.space 0x1b - (. - FieldScriptText_1EA9A0)
	.endif
	@ field-script:0x1EA4EC FieldScriptText_1EA9BB
	.globl FieldScriptText_1EA9BB
FieldScriptText_1EA9BB: @ 0x081EA9BB
	.string "あれま！　いがいに　わかいのね！\pうちの　しゅじんに　かってしまう　とは\nなんと　すごうでの　トレーナー　なの！\pじゃあ　こんどは　わたしと　しょうぶよ！{EOS}"
	.if (. - FieldScriptText_1EA9BB) > 0x4e
	.error "FieldScriptText_1EA9BB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1EA9BB) < 0x4e
	.space 0x4e - (. - FieldScriptText_1EA9BB)
	.endif

	@ trainerbattle-cfg:0x1EA4F2 TrainerBattleText_1EAA09
	.globl TrainerBattleText_1EAA09
TrainerBattleText_1EAA09: @ 0x081EAA09
	.string "んまーっ！\nあなたって　なんて　つよいのかしら！{EOS}"
	.if (. - TrainerBattleText_1EAA09) > 0x19
	.error "TrainerBattleText_1EAA09 may not grow beyond its original slot"
	.endif
	.if (. - TrainerBattleText_1EAA09) < 0x19
	.space 0x19 - (. - TrainerBattleText_1EAA09)
	.endif
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
