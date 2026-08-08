	@ data/text/trainers.inc:2930 Route127_Text_RogerDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_260FBF
gText_Rom_260FBF: @ 0x08260FBF
	.string "わあ! いとが からまった!\nまさに あとの まつり$"
	.if (. - gText_Rom_260FBF) != 0x1b
	.error "gText_Rom_260FBF must retain its original byte length"
	.endif
