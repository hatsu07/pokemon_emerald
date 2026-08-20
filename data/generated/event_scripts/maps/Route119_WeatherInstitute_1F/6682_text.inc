	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:86 Route119_WeatherInstitute_1F_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_241330
gText_Rom_241330: @ 0x08241330
	.string "あら?\nどうして ここに こどもが いるのかしら?{EOS}"
	.if (. - gText_Rom_241330) > 0x1a
	.error "gText_Rom_241330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241330) < 0x1a
	.space 0x1a - (. - gText_Rom_241330)
	.endif
