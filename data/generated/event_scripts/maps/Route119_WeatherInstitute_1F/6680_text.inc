	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:81 Route119_WeatherInstitute_1F_Text_Grunt1PostBattle
	.globl gText_Rom_2412F8
gText_Rom_2412F8: @ 0x082412F8
	.string "リーダーは なんでも しっている……\pしかし なにを かんがえて いるのか\nしたっぱの おれらには さっぱりだ{EOS}"
	.if (. - gText_Rom_2412F8) > 0x38
	.error "gText_Rom_2412F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2412F8) < 0x38
	.space 0x38 - (. - gText_Rom_2412F8)
	.endif
