	@ data/maps/LilycoveCity/scripts.inc:646 LilycoveCity_Text_TeamAquaRenovatedCavern
	.globl gText_Rom_1E111B
gText_Rom_1E111B: @ 0x081E111B
	.string "この いりえの ところに おかしな\nどうくつの いりぐちが ある じゃろう?\pいぜんは てんねんの どうくつ だったが\nアクアだん とかいう れんちゅうが\lかいぞうして あんなふうに したんじゃ!\p「しぜんを あいする アクアだん!」\n……と いっておるが\pいうことと やることが ちがっとる!$"
	.if (. - gText_Rom_1E111B) > 0x94
	.error "gText_Rom_1E111B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E111B) < 0x94
	.space 0x94 - (. - gText_Rom_1E111B)
	.endif
