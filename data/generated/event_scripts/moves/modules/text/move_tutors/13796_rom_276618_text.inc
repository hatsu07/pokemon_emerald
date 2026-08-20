	@ data/text/move_tutors.inc:180 MoveTutor_Text_DynamicPunchTaught
	.globl gText_Rom_276618
gText_Rom_276618: @ 0x08276618
	.string "なあ ばくれつパンチ つかって\nトクサネジムで かって きてくれよ!{EOS}"
	.if (. - gText_Rom_276618) > 0x23
	.error "gText_Rom_276618 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276618) < 0x23
	.space 0x23 - (. - gText_Rom_276618)
	.endif
