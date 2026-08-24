	@ field-script:0x1EA4B0 FieldScriptText_1EA9A0
	.globl gText_Rom_1EA9A0
gText_Rom_1EA9A0: @ 0x081EA9A0
	.string "おーい！\nなかなか　つよい　トレーナーが　いたぞー！{EOS}"
	.if (. - gText_Rom_1EA9A0) > 0x1b
	.error "gText_Rom_1EA9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA9A0) < 0x1b
	.space 0x1b - (. - gText_Rom_1EA9A0)
	.endif
	@ field-script:0x1EA4EC FieldScriptText_1EA9BB
	.globl gText_Rom_1EA9BB
gText_Rom_1EA9BB: @ 0x081EA9BB
	.string "あれま！　いがいに　わかいのね！\pうちの　しゅじんに　かってしまう　とは\nなんと　すごうでの　トレーナー　なの！\pじゃあ　こんどは　わたしと　しょうぶよ！{EOS}"
	.if (. - gText_Rom_1EA9BB) > 0x4e
	.error "gText_Rom_1EA9BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA9BB) < 0x4e
	.space 0x4e - (. - gText_Rom_1EA9BB)
	.endif

	@ trainerbattle-cfg:0x1EA4F2 TrainerBattleText_1EAA09
	.globl gText_Rom_1EAA09
gText_Rom_1EAA09: @ 0x081EAA09
	.string "んまーっ！\nあなたって　なんて　つよいのかしら！{EOS}"
	.if (. - gText_Rom_1EAA09) > 0x19
	.error "gText_Rom_1EAA09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA09) < 0x19
	.space 0x19 - (. - gText_Rom_1EAA09)
	.endif
