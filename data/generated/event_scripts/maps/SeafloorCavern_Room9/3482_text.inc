	@ data/maps/SeafloorCavern_Room9/scripts.inc:224 SeafloorCavern_Room9_Text_ArchieBeholdKyogre
	.globl gText_Rom_218CB9
gText_Rom_218CB9: @ 0x08218CB9
	.string "アオギリ『どうだ みてみろ!\pちょう こだいポケモン カイオーガが\nしずかに ねむる うつくしい すがたを!\pおれは この ひが くるのを\nながい あいだ まっていた……{EOS}"
	.if (. - gText_Rom_218CB9) > 0x56
	.error "gText_Rom_218CB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218CB9) < 0x56
	.space 0x56 - (. - gText_Rom_218CB9)
	.endif
