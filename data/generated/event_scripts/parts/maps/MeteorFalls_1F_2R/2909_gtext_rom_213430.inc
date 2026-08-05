	@ data/maps/MeteorFalls_1F_2R/scripts.inc:137 MeteorFalls_1F_2R_Text_JayNotEnoughMons (+2 aliases)
	.globl gText_Rom_213430
gText_Rom_213430: @ 0x08213430
	.string "ハツ『おやおや\nわかい トレーナーさん ですねえ\pわしらと しょうぶ してくれるのなら\nポケモンを もっと つれておいで$"
	.if (. - gText_Rom_213430) > 0x3d
	.error "gText_Rom_213430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213430) < 0x3d
	.space 0x3d - (. - gText_Rom_213430)
	.endif
