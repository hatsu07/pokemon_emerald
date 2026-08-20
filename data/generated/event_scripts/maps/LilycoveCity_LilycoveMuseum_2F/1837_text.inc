	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:224 LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall
	.globl gText_Rom_2064A9
gText_Rom_2064A9: @ 0x082064A9
	.string "ごらんの とおり まだ\nえが かざられて おりません\pここには 1かいに あるような\nいわゆる めいが といった ものとは\lちがう えを かざりたいの ですよ!\pふるい めいが ばかりが\nげいじゅつ なのでは ありません!\pこの てんじしつ には……\pいまにも ポケモンが とびだして きそうな\nモダンで いきいきとした さくひんを\lかざって みたいのです!{EOS}"
	.if (. - gText_Rom_2064A9) > 0xb4
	.error "gText_Rom_2064A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2064A9) < 0xb4
	.space 0xb4 - (. - gText_Rom_2064A9)
	.endif
