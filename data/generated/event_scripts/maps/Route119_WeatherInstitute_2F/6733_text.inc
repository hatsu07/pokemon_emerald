	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:291 Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
	.globl gText_Rom_241A56
gText_Rom_241A56: @ 0x08241A56
	.string "{PLAYER}は\nポワルンを もらった!$"
	.if (. - gText_Rom_241A56) > 0x10
	.error "gText_Rom_241A56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A56) < 0x10
	.space 0x10 - (. - gText_Rom_241A56)
	.endif
