	@ data/maps/AquaHideout_1F/scripts.inc:65 AquaHideout_1F_Text_TeamMagmaAtMtChimney
	.globl gText_Rom_217B99
gText_Rom_217B99: @ 0x08217B99
	.string "なんだ なんだ!\nおまえは マグマだんの したっぱか!?\pえんとつやまには マグマだんが ねらう\nすごい ポケモンが いるらしいな!\pえーい! そいつは\nいったい どんな ポケモン なんだ!$"
	.if (. - gText_Rom_217B99) > 0x60
	.error "gText_Rom_217B99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217B99) < 0x60
	.space 0x60 - (. - gText_Rom_217B99)
	.endif
