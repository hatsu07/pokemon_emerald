	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:99 Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs
	.globl gText_Rom_241380
gText_Rom_241380: @ 0x08241380
	.string "ぼくが ベッドで ねてる あいだに\nみんな 2かいに いっちゃったよ{EOS}"
	.if (. - gText_Rom_241380) > 0x23
	.error "gText_Rom_241380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241380) < 0x23
	.space 0x23 - (. - gText_Rom_241380)
	.endif
