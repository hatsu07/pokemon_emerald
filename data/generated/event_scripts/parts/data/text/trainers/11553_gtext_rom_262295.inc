	@ data/text/trainers.inc:3404 Route134_Text_MarleyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262295
gText_Rom_262295: @ 0x08262295
	.string "そんな てが あるなんて……!\nかんぱい ですわ$"
	.if (. - gText_Rom_262295) != 0x19
	.error "gText_Rom_262295 must retain its original byte length"
	.endif
