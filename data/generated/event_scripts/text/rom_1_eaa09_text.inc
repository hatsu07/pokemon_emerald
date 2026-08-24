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
