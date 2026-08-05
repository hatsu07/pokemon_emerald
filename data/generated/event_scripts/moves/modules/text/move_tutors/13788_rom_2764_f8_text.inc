	@ data/text/move_tutors.inc:152 MoveTutor_Text_SubstituteTaught
	.globl gText_Rom_2764F8
gText_Rom_2764F8: @ 0x082764F8
	.string "わたしたち にんげんは\nじぶんの じんせいを\lおもいきり たのしまなきゃ ね!\lあなたも そうなるように いのってる!$"
	.if (. - gText_Rom_2764F8) > 0x3c
	.error "gText_Rom_2764F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764F8) < 0x3c
	.space 0x3c - (. - gText_Rom_2764F8)
	.endif
