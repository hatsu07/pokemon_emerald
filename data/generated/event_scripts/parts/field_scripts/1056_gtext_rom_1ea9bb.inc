	@ field-script:0x1EA4EC FieldScriptText_1EA9BB
	.globl gText_Rom_1EA9BB
gText_Rom_1EA9BB: @ 0x081EA9BB
	.string "あれま！　いがいに　わかいのね！\pうちの　しゅじんに　かってしまう　とは\nなんと　すごうでの　トレーナー　なの！\pじゃあ　こんどは　わたしと　しょうぶよ！$"
	.if (. - gText_Rom_1EA9BB) > 0x4e
	.error "gText_Rom_1EA9BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA9BB) < 0x4e
	.space 0x4e - (. - gText_Rom_1EA9BB)
	.endif
