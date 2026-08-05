	@ data/text/move_tutors.inc:119 MoveTutor_Text_SleepTalkDeclined
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2763BB
gText_Rom_2763BB: @ 0x082763BB
	.string "そうかい そうかい……\nみんな めざめるパワーが だいすきかい$"
	.if (. - gText_Rom_2763BB) != 0x20
	.error "gText_Rom_2763BB must retain its original byte length"
	.endif
