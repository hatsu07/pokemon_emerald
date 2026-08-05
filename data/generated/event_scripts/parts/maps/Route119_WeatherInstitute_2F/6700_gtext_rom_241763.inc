	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:206 Route119_WeatherInstitute_2F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_241763
gText_Rom_241763: @ 0x08241763
	.string "この けんきゅうじょで うみだされた\nポケモンは てんきと かんけいある って\lきいたから いただきに きたのさ!$"
	.if (. - gText_Rom_241763) > 0x3a
	.error "gText_Rom_241763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241763) < 0x3a
	.space 0x3a - (. - gText_Rom_241763)
	.endif
