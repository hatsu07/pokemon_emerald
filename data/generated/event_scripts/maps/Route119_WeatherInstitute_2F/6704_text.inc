	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:214 Route119_WeatherInstitute_2F_Text_Grunt2PostBattle
	.globl gText_Rom_2417B2
gText_Rom_2417B2: @ 0x082417B2
	.string "ここで うみだされた ポケモンが\nもし てんきを じゆうに あやつれるなら\lぜったい アクアだんに ひつよう だぜ!{EOS}"
	.if (. - gText_Rom_2417B2) > 0x3b
	.error "gText_Rom_2417B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2417B2) < 0x3b
	.space 0x3b - (. - gText_Rom_2417B2)
	.endif
