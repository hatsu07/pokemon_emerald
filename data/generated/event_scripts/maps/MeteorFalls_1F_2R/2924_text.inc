	@ data/maps/MeteorFalls_1F_2R/scripts.inc:172 MeteorFalls_1F_2R_Text_JayPostRematch
	.globl gText_Rom_213569
gText_Rom_213569: @ 0x08213569
	.string "ハツ『けっこんして 50ねん……\nいろんなことが ありましたねえ\pこれからも じいさんと いっしょに\nたのしいことが つづくと いいですわねえ$"
	.if (. - gText_Rom_213569) > 0x48
	.error "gText_Rom_213569 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213569) < 0x48
	.space 0x48 - (. - gText_Rom_213569)
	.endif
