	@ data/text/apprentice.inc:325 gText_ApprenticeThanksHeldItem5
	.globl gText_Rom_26F1B7
gText_Rom_26F1B7: @ 0x0826F1B7
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を さがすぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F1B7) > 0x49
	.error "gText_Rom_26F1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F1B7) < 0x49
	.space 0x49 - (. - gText_Rom_26F1B7)
	.endif
