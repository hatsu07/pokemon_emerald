	@ data/text/move_tutors.inc:65 MoveTutor_MimicTeach
	.globl gText_Rom_27619E
gText_Rom_27619E: @ 0x0827619E
	.string "おお おわかいの!\nわしは こども じゃが\lこのまちの じいちゃんや ばあちゃんの\lはなしかたを ものまね しておるのじゃ!\pどうかね? おわかいの\nおぬしの ポケモンに わしが\lものまねを おしえて やろうかね?$"
	.if (. - gText_Rom_27619E) > 0x6c
	.error "gText_Rom_27619E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27619E) < 0x6c
	.space 0x6c - (. - gText_Rom_27619E)
	.endif
