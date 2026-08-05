	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:77 Route119_WeatherInstitute_1F_Text_Grunt1Defeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2412E9
gText_Rom_2412E9: @ 0x082412E9
	.string "くそー\nこどもに まけた……$"
	.if (. - gText_Rom_2412E9) != 0xf
	.error "gText_Rom_2412E9 must retain its original byte length"
	.endif
