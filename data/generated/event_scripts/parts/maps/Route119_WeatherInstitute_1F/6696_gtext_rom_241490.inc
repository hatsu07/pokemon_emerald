	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:124 Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo
	.globl gText_Rom_241490
gText_Rom_241490: @ 0x08241490
	.string "やあ!\nあなたの おかげで たすかりましたよ!\lそれにしても……\pアクアだんの れんちゅうは\nなにを するつもり だったのでしょう?$"
	.if (. - gText_Rom_241490) > 0x43
	.error "gText_Rom_241490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241490) < 0x43
	.space 0x43 - (. - gText_Rom_241490)
	.endif
