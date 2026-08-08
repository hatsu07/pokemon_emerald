	@ data/text/trainers.inc:2927 Route127_Text_RogerIntro (+1 aliases)
	.globl gText_Rom_260FA5
gText_Rom_260FA5: @ 0x08260FA5
	.string "よーし!\nポケモンずきと つりずきの たいけつだ!$"
	.if (. - gText_Rom_260FA5) > 0x1a
	.error "gText_Rom_260FA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260FA5) < 0x1a
	.space 0x1a - (. - gText_Rom_260FA5)
	.endif
