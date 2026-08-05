	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:130 Route119_WeatherInstitute_1F_Text_TakeRestInBed
	.globl gText_Rom_21E5E9
gText_Rom_21E5E9: @ 0x0821E5E9
	.string "ベッドが ある……\nやすんでいこう"
	.byte EOS
	.if (. - gText_Rom_21E5E9) > 0x12
	.error "gText_Rom_21E5E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E5E9) < 0x12
	.space 0x12 - (. - gText_Rom_21E5E9)
	.endif
