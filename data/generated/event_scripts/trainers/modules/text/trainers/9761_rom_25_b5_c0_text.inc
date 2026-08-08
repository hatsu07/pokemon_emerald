	@ data/text/trainers.inc:785 Route110_Text_AbigailRematchPostBattle
	.globl gText_Rom_25B5C0
gText_Rom_25B5C0: @ 0x0825B5C0
	.string "ひょっとして きろくに\nちょうせん していたのかしら?\pだったら ジャマして ゴメンねー$"
	.if (. - gText_Rom_25B5C0) > 0x2d
	.error "gText_Rom_25B5C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5C0) < 0x2d
	.space 0x2d - (. - gText_Rom_25B5C0)
	.endif
