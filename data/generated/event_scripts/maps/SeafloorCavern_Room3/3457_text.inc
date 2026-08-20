	@ data/maps/SeafloorCavern_Room3/scripts.inc:20 SeafloorCavern_Room3_Text_ShellyPostBattle
	.globl gText_Rom_218808
gText_Rom_218808: @ 0x08218808
	.string "オーッホッホ!\pあなた そんなに つよいんだもの\nアクアだんの なかま じゃなくて\lとっても ざんねんだわ\pリーダーが じつげん してくれる\nすばらしい せかいを\lいっしょに たのしむことが できたのに{EOS}"
	.if (. - gText_Rom_218808) > 0x66
	.error "gText_Rom_218808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218808) < 0x66
	.space 0x66 - (. - gText_Rom_218808)
	.endif
