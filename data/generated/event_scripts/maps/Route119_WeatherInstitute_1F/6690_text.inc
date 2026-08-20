	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:103 Route119_WeatherInstitute_1F_Text_WowYoureStrong
	.globl gText_Rom_2413A3
gText_Rom_2413A3: @ 0x082413A3
	.string "{STR_VAR_1} つよいんだね!\pぼくも {STR_VAR_1} みたいな\nポケモントレーナーに なりたいや!{EOS}"
	.if (. - gText_Rom_2413A3) > 0x29
	.error "gText_Rom_2413A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2413A3) < 0x29
	.space 0x29 - (. - gText_Rom_2413A3)
	.endif
