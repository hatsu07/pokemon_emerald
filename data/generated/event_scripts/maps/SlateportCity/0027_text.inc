	@ data/maps/SlateportCity/scripts.inc:980 SlateportCity_Text_GoingToCompeteInBattleTent
	.globl gText_Rom_1DCBCA
gText_Rom_1DCBCA: @ 0x081DCBCA
	.string "うぉー! バトルテントに\nぼくも しゅつじょう するぞおー!\pと そのまえに!\nポケモン つかまえて こなくちゃ!{EOS}"
	.if (. - gText_Rom_1DCBCA) > 0x3a
	.error "gText_Rom_1DCBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCBCA) < 0x3a
	.space 0x3a - (. - gText_Rom_1DCBCA)
	.endif
