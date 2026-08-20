	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl gText_Rom_25A082
gText_Rom_25A082: @ 0x0825A082
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね{EOS}"
	.if (. - gText_Rom_25A082) > 0x33
	.error "gText_Rom_25A082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A082) < 0x33
	.space 0x33 - (. - gText_Rom_25A082)
	.endif
