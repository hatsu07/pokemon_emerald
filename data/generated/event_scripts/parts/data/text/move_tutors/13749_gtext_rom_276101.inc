	@ data/text/move_tutors.inc:46 MoveTutor_Text_FuryCutterTeach
	.globl gText_Rom_276101
gText_Rom_276101: @ 0x08276101
	.string "おなじ わざをさ\nつづけて なんども だすと\lどんどん つよくなる わざが あるの!\lしかも むしタイプで かっこいいの!\pれんぞくぎりって いうんだけど\nおぼえて みたい?$"
	.if (. - gText_Rom_276101) > 0x58
	.error "gText_Rom_276101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276101) < 0x58
	.space 0x58 - (. - gText_Rom_276101)
	.endif
