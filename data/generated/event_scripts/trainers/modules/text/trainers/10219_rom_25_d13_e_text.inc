	@ data/text/trainers.inc:1442 Route115_Text_TimothyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D13E
gText_Rom_25D13E: @ 0x0825D13E
	.string "ふむ……\nこんな まけかたも ひさかたぶりだ\lできれば また あいてを してほしい{EOS}"
	.if (. - gText_Rom_25D13E) != 0x2a
	.error "gText_Rom_25D13E must retain its original byte length"
	.endif
