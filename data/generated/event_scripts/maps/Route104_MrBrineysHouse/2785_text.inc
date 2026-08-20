	@ data/maps/Route104_MrBrineysHouse/scripts.inc:145 Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail
	.globl gText_Rom_21195C
gText_Rom_21195C: @ 0x0821195C
	.string "ハギ『そうか…… きみは\nピーコちゃんの いのちの おんじんだ\pふねに のる ひつようが あるときは\nいつでも えんりょなく いっておくれ!{EOS}"
	.if (. - gText_Rom_21195C) > 0x47
	.error "gText_Rom_21195C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21195C) < 0x47
	.space 0x47 - (. - gText_Rom_21195C)
	.endif
