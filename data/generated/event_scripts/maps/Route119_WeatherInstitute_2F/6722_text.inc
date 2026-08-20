	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:260 Route119_WeatherInstitute_2F_Text_ShellyPostBattle
	.globl gText_Rom_24193C
gText_Rom_24193C: @ 0x0824193C
	.string "マグマだん だけでも めざわり なのに\nあなた どうして わたしたちの まわりを\lチョロチョロ かぎまわって いるの!{EOS}"
	.if (. - gText_Rom_24193C) > 0x3c
	.error "gText_Rom_24193C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24193C) < 0x3c
	.space 0x3c - (. - gText_Rom_24193C)
	.endif
