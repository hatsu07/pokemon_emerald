	@ data/text/move_tutors.inc:123 MoveTutor_Text_SleepTalkWhichMon
	.globl gText_Rom_2763DB
gText_Rom_2763DB: @ 0x082763DB
	.string "むぉう! ものわかりの いい こどもよ!\nさて ポケモンは どいつが いいかな?$"
	.if (. - gText_Rom_2763DB) > 0x29
	.error "gText_Rom_2763DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2763DB) < 0x29
	.space 0x29 - (. - gText_Rom_2763DB)
	.endif
