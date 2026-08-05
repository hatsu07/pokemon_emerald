	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:266 Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy
	.globl gText_Rom_241978
gText_Rom_241978: @ 0x08241978
	.string "たいへんです!\pたったいま マグマだんの れんちゅうが\nてんきけんきゅうじょを つうかして\lおくりびやま ほうめんに\lむかって いきました!$"
	.if (. - gText_Rom_241978) > 0x47
	.error "gText_Rom_241978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241978) < 0x47
	.space 0x47 - (. - gText_Rom_241978)
	.endif
