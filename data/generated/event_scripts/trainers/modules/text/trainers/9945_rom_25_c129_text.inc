	@ data/text/trainers.inc:1043 Route111_Text_BryanPostBattle
	.globl gText_Rom_25C129
gText_Rom_25C129: @ 0x0825C129
	.string "この さばくには\nナゾが おおい ですぞーっ!$"
	.if (. - gText_Rom_25C129) > 0x18
	.error "gText_Rom_25C129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C129) < 0x18
	.space 0x18 - (. - gText_Rom_25C129)
	.endif
