	@ data/text/trainers.inc:422 Route106_Text_KylaPostBattle
	.globl gText_Rom_25A7AB
gText_Rom_25A7AB: @ 0x0825A7AB
	.string "なみに ゆられて ただようのが だいすき\nあなたも やってみない?{EOS}"
	.if (. - gText_Rom_25A7AB) > 0x22
	.error "gText_Rom_25A7AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7AB) < 0x22
	.space 0x22 - (. - gText_Rom_25A7AB)
	.endif
