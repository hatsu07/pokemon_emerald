	@ data/text/trainers.inc:1508 Route115_Text_HectorDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D413
gText_Rom_25D413: @ 0x0825D413
	.string "きみ……\nぼくの ポケモン ほしいでしょ?{EOS}"
	.if (. - gText_Rom_25D413) != 0x16
	.error "gText_Rom_25D413 must retain its original byte length"
	.endif
