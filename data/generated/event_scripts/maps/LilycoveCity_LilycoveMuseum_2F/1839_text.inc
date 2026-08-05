	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:227 LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit
	.globl gText_Rom_20655D
gText_Rom_20655D: @ 0x0820655D
	.string "つい ながながと しつれい しました\pあなたは まだ おわかいし\nたびを なさって いる ようだから\pいきいきとした ポケモンや\nそれを えがいた すてきな さくひんに\lであわれる かも しれません!\pもし そんな さくひんに であったら\nそのえを ここに かざれる ように\lあなたから おねがい して くださると\lたいへん うれしいです$"
	.if (. - gText_Rom_20655D) > 0xaa
	.error "gText_Rom_20655D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20655D) < 0xaa
	.space 0xaa - (. - gText_Rom_20655D)
	.endif
