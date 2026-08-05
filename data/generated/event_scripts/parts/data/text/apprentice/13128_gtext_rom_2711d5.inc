	@ data/text/apprentice.inc:610 gText_ApprenticeMonThanks5
	.globl gText_Rom_2711D5
gText_Rom_2711D5: @ 0x082711D5
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を つかまえて みるぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!$"
	.if (. - gText_Rom_2711D5) > 0x4e
	.error "gText_Rom_2711D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2711D5) < 0x4e
	.space 0x4e - (. - gText_Rom_2711D5)
	.endif
