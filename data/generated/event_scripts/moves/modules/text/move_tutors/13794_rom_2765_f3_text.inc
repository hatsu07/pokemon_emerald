	@ data/text/move_tutors.inc:176 MoveTutor_Text_DynamicPunchWhichMon
	.globl gText_Rom_2765F3
gText_Rom_2765F3: @ 0x082765F3
	.string "うぉー! ほんとか! いいやつだな!\nどのポケモンに おしえれば いい?{EOS}"
	.if (. - gText_Rom_2765F3) > 0x25
	.error "gText_Rom_2765F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765F3) < 0x25
	.space 0x25 - (. - gText_Rom_2765F3)
	.endif
