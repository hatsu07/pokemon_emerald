	@ data/text/move_tutors.inc:171 MoveTutor_Text_DynamicPunchDeclined
	.globl gText_Rom_2765D1
gText_Rom_2765D1: @ 0x082765D1
	.string "ちきしょー おまえまで\nオレを ばかに するかっ!?\lボカ ボカ!$"
	.if (. - gText_Rom_2765D1) > 0x22
	.error "gText_Rom_2765D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765D1) < 0x22
	.space 0x22 - (. - gText_Rom_2765D1)
	.endif
