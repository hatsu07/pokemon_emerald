	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:219 BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
	.globl gText_Rom_22ED8A
gText_Rom_22ED8A: @ 0x0822ED8A
	.string "あらたなる ピラミッド せいはしゃ!\nそのなは {PLAYER}!"
	.byte EOS
	.if (. - gText_Rom_22ED8A) > 0x1c
	.error "gText_Rom_22ED8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ED8A) < 0x1c
	.space 0x1c - (. - gText_Rom_22ED8A)
	.endif
