	@ data/text/trainers.inc:1856 Route118_Text_RosePostBattle
	.globl gText_Rom_25E353
gText_Rom_25E353: @ 0x0825E353
	.string "はなも ポケモンも\nいい かおりの ものが だいすき!\lクサイにおいは…… かんべんね{EOS}"
	.if (. - gText_Rom_25E353) > 0x2c
	.error "gText_Rom_25E353 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E353) < 0x2c
	.space 0x2c - (. - gText_Rom_25E353)
	.endif
