	@ data/text/move_tutors.inc:38 MoveTutor_Text_RolloutWhichMon
	.globl gText_Rom_2760CB
gText_Rom_2760CB: @ 0x082760CB
	.string "えへへ いいよ!\nぼく そっくりの ポケモンだと いいな{EOS}"
	.if (. - gText_Rom_2760CB) > 0x1d
	.error "gText_Rom_2760CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760CB) < 0x1d
	.space 0x1d - (. - gText_Rom_2760CB)
	.endif
