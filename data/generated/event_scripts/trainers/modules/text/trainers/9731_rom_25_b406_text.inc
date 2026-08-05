	@ data/text/trainers.inc:743 Route110_Text_AnthonyPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B406
gText_Rom_25B406: @ 0x0825B406
	.string "スピードだけじゃ ポケモンしょうぶ\nかてませーん! ハンセイしまーす!$"
	.if (. - gText_Rom_25B406) != 0x24
	.error "gText_Rom_25B406 must retain its original byte length"
	.endif
