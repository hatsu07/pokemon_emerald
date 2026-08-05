	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:256 Route119_WeatherInstitute_2F_Text_ShellyDefeat (+1 aliases)
	.globl gText_Rom_241921
gText_Rom_241921: @ 0x08241921
	.string "オーッホッホ!\nつよくて にくらしく なっちゃうわ!$"
	.if (. - gText_Rom_241921) > 0x1b
	.error "gText_Rom_241921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241921) < 0x1b
	.space 0x1b - (. - gText_Rom_241921)
	.endif
