	@ data/text/move_tutors.inc:143 MoveTutor_Text_SubstituteDeclined
	.globl gText_Rom_2764BA
gText_Rom_2764BA: @ 0x082764BA
	.string "あら そう?\nポケモンなら じぶんの ぶんしんを\lつくる ことが できるのに$"
	.if (. - gText_Rom_2764BA) > 0x27
	.error "gText_Rom_2764BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764BA) < 0x27
	.space 0x27 - (. - gText_Rom_2764BA)
	.endif
