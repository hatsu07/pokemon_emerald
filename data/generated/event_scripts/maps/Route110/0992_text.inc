	@ data/maps/Route110/scripts.inc:854 Route110_Text_WhichShouldIChoose
	.globl gText_Rom_1E9BF1
gText_Rom_1E9BF1: @ 0x081E9BF1
	.string "サイクリングロードで キンセツを めざすか\nしたの みちで ポケモンを さがすか\lどっちに しようかな?{EOS}"
	.if (. - gText_Rom_1E9BF1) > 0x35
	.error "gText_Rom_1E9BF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9BF1) < 0x35
	.space 0x35 - (. - gText_Rom_1E9BF1)
	.endif
