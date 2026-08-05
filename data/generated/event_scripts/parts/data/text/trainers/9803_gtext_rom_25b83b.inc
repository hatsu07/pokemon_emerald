	@ data/text/trainers.inc:845 Route110_Text_IsabelIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B83B
gText_Rom_25B83B: @ 0x0825B83B
	.string "おほほ! だいじな ポケモンを\nじまん するためなら どこにでも いきますわ$"
	.if (. - gText_Rom_25B83B) != 0x27
	.error "gText_Rom_25B83B must retain its original byte length"
	.endif
