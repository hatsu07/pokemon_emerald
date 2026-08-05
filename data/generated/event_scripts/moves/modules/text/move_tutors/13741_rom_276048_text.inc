	@ data/text/move_tutors.inc:26 MoveTutor_Text_RolloutTeach
	.globl gText_Rom_276048
gText_Rom_276048: @ 0x08276048
	.string "ねえ ここから あっちに むかって\nいちども まがらずに ずーっと\lあるいて いけるって しってた?\lぼく なら ころがって いけるかも……!\pきみの ポケモンも ころがって みる?\nころがる なら おしえて あげられるよ$"
	.if (. - gText_Rom_276048) > 0x70
	.error "gText_Rom_276048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276048) < 0x70
	.space 0x70 - (. - gText_Rom_276048)
	.endif
