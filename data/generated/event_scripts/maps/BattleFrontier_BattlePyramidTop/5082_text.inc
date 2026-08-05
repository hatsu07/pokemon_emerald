	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:216 BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo
	.globl gText_Rom_22ED11
gText_Rom_22ED11: @ 0x0822ED11
	.string "よくぞ まいられましたぞ!\nここは バトルピラミッドの ちょうじょう!\pこの うえに あるのが\nピラミッドのいただき ですぞ!\pバトルピラミッドを せいはした もののみ\nこの うえに たつことが できるのですぞ!\pさあ! のぼってくだされ!"
	.byte EOS
	.if (. - gText_Rom_22ED11) > 0x79
	.error "gText_Rom_22ED11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ED11) < 0x79
	.space 0x79 - (. - gText_Rom_22ED11)
	.endif
