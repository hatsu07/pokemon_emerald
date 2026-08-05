	@ data/text/trainers.inc:1052 Route111_Text_BrandenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C179
gText_Rom_25C179: @ 0x0825C179
	.string "ぼくの サンドも\nサンドイッチ だいすき なんだ$"
	.if (. - gText_Rom_25C179) != 0x19
	.error "gText_Rom_25C179 must retain its original byte length"
	.endif
