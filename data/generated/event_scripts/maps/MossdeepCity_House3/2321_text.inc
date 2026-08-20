	@ data/maps/MossdeepCity_House3/scripts.inc:28 MossdeepCity_House3_Text_YouWantSuperRod
	.globl gText_Rom_20C74E
gText_Rom_20C74E: @ 0x0820C74E
	.string "おーい! トレーナーよお!\nすごいつりざおは ほんとうに すごいぞお\pなんたって かいていに いる\nポケモンも つりあげられる からのお!\pどお? ほしく なった?{EOS}"
	.if (. - gText_Rom_20C74E) > 0x53
	.error "gText_Rom_20C74E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C74E) < 0x53
	.space 0x53 - (. - gText_Rom_20C74E)
	.endif
