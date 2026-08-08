	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:227 Route119_WeatherInstitute_2F_Text_Grunt3PostBattle
	.globl gText_Rom_241824
gText_Rom_241824: @ 0x08241824
	.string "アクアだんの りそうを しらないくせに\nじゃま するんじゃ ないよ!$"
	.if (. - gText_Rom_241824) > 0x23
	.error "gText_Rom_241824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241824) < 0x23
	.space 0x23 - (. - gText_Rom_241824)
	.endif
